#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *slave(void *arg)
{
    char i;

    for (i = 'a'; i < 'd'; i++) {
        printf("    slave:%c\n", i);
        sleep(1);
    }
    return NULL;
}

int main()
{
    char i;
    pthread_t slave_tid;

    pthread_create(&slave_tid, NULL, slave, NULL);
    for (i = 'A'; i < 'D'; i++) {
        printf("master:%c\n", i);
        sleep(1);
    }
    return 0;
}
