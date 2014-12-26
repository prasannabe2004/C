   #include <stdio.h>
    #include <stdlib.h>
    int main(void) {
        int *p = (int *)malloc(2 * sizeof(int));
        *p = 2;
        *(p + 1) = *(p) - 1;
        *p = p[1];
        printf("%d",*p);
        free(p);
        return 0;
    }
