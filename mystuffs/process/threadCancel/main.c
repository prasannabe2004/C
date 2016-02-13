#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *slave(void *arg)
{
    pause();
    puts("NEVER REACH HERE");
    return NULL;
}

int main()
{
    pthread_t slave_tid;
    void *result;

    pthread_create(&slave_tid, NULL, slave, NULL);
    pthread_cancel(slave_tid);
    pthread_join(slave_tid, &result);
    if (result == PTHREAD_CANCELED)
        puts("slave thread is canceled");
    else
        puts("slave thread is joined");
    return 0;
}
