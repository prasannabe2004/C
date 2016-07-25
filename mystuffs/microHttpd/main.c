#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>

#include <sys/types.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <microhttpd.h>

static int shouldNotExit = 1;

int answer_to_connection (void *cls, struct MHD_Connection *connection,
                          const char *url,
                          const char *method, const char *version,
                          const char *upload_data,
                          size_t *upload_data_size, void **con_cls)
{
  const char *page  = "<html><body>Hello, browser!</body></html>\n";
  struct MHD_Response *response;
  int ret;
  printf("Got a request\n");
  response = MHD_create_response_from_buffer (strlen (page),
                                            (void*) page, MHD_RESPMEM_PERSISTENT);
  ret = MHD_queue_response (connection, MHD_HTTP_OK, response);
  MHD_destroy_response (response);

  return ret;
}

void handle_term(int signo)
{
    shouldNotExit = 0;
}

void* http(void *arg)
{
    int *port = (int *)arg;
    struct MHD_Daemon *d;

    d = MHD_start_daemon (MHD_USE_SELECT_INTERNALLY | MHD_USE_DEBUG | MHD_USE_POLL,
                        *port,
                        0, 0, &answer_to_connection, (void *)NULL, MHD_OPTION_END);
    if (d == 0){
        return 0;
    }
    while(shouldNotExit) {
        sleep(1);
    }
    MHD_stop_daemon (d);
    return 0;
}

int main (int argc, char *const *argv)
{

    if (argc != 2){
        printf ("%s PORT\n", argv[0]);
        exit(1);
    }
    daemon(0,0);
    signal(SIGTERM, handle_term);
    int port = atoi(argv[1]);
    pthread_t  thread;
    if ( 0 != pthread_create(&thread, 0 , http, &port)){
        exit(1);
    }
    pthread_join(thread, 0);
    return 0;
}
