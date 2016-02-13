#include <stdio.h>
#include <pthread.h>

int use_mutex;
pthread_mutex_t mutex;
volatile int global = 0;

void *compute(void *arg)
{
    int i,j;

    for (i = 0; i < 300; i++) {
        //printf("Value of global is %d in %lu\n",global, pthread_self());
        if (use_mutex) {
            printf("%ld locking\n",pthread_self());
            pthread_mutex_lock(&mutex);
            //this shows mutex working
            //for(j=0;j<1000000;j++);
            // This will dead lock
            sleep(0.25);
            global++;
            pthread_mutex_unlock(&mutex);
            fflush(stdout);
            printf("%ld unlocking\n",pthread_self());
        } else
            global++;
    }
    return NULL;
}

void test()
{
    int i;
    pthread_t tids[3];

    global = 0;
    pthread_mutex_init(&mutex, NULL);

    for (i = 0; i < 3; i++)
        pthread_create(&tids[i], NULL, compute, NULL);

    for (i = 0; i < 2; i++)
        pthread_join(tids[i], NULL);

    printf("global = %d\n", global);
    pthread_mutex_destroy(&mutex);
}

int main()
{
    use_mutex = 0;
    test();

    use_mutex = 1;
    test();
    return 0;
}
