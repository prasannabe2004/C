#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct result {
    int sum;
};

struct param {
    int number;
};

void *compute(void *arg)
{
    int i;
    struct param *param = (struct param *)arg;
    struct result *result = malloc(sizeof(struct result));

    result->sum = 0;
    for (i = 0; i < param->number; i++)
        result->sum += i;

    pthread_exit(result);
    puts("Never reach here");
    return result;
}

int main()
{
    struct param *param = malloc(sizeof(struct param));
    struct result *result;
    pthread_t computer;

    param->number = 101;
    pthread_create(&computer, NULL, compute, param);

    pthread_join(computer, (void **)&result);
    printf("sum = %d\n", result->sum);

    free(param);
    free(result);
    return 0;
}
