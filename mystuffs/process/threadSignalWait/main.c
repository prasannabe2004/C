#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *compute(void *arg)
{
    printf("I am in thread %ld\n",pthread_self());
    pthread_mutex_lock(&mutex);
    printf("Going to Wait %ld\n",pthread_self());
    pthread_cond_wait(&cond, &mutex);
    pthread_mutex_unlock(&mutex);

    printf("Wait completed for %ld\n", pthread_self());
    return NULL;
}

void wakeup_one_thread()
{
    pthread_mutex_lock(&mutex);
    pthread_cond_signal(&cond);
    pthread_mutex_unlock(&mutex);
}

int main()
{
    int i;
    pthread_t tids[3];

    for (i = 0; i < 3; i++)
        pthread_create(&tids[i], NULL, compute, NULL);

    sleep(1);
    wakeup_one_thread();
    wakeup_one_thread();
    wakeup_one_thread();

    pthread_exit(NULL);
    return 0;
}
