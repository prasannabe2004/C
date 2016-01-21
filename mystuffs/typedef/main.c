#include <stdio.h>
#include <stdlib.h>

typedef int COMPARE_PROC_t( const void *, const void * );
typedef COMPARE_PROC_t *COMPARE_PROC_p_t;

typedef struct sort_data_s
{
    int *sort_array;
    COMPARE_PROC_p_t test_proc;
} SORT_DATA_t, *SORT_DATA_p_t;

int main()
{
    SORT_DATA_t s;
    SORT_DATA_p_t p;
    s.sort_array = malloc(sizeof(int) * 10);
    s.sort_array[0] = 10;

    p = &s;

    p->sort_array[0] = 100;


    printf("first element %d\n", s.sort_array[0]);
    return 0;
}
