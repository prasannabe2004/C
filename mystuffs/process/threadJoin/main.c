#include <stdio.h>
#include <pthread.h>

void *slave(void *arg)
{
    puts("slave thread is sleeping");
    sleep(1); // let main thread run first
    puts("slave thread exited");
    return NULL;
}

int main()
{
    pthread_t slave_tid;

    pthread_create(&slave_tid, NULL, slave, NULL);
    pthread_join(slave_tid, NULL);
    puts("main thread exited");
    return 0;
}
