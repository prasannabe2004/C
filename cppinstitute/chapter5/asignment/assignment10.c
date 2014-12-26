    #include <stdio.h>
    #include <stdlib.h>
    int main(void) {
        int i,j;
        int **p = (int **)malloc(2 * sizeof(int *));
        p[0] = (int *)malloc(2 * sizeof(int));
        p[1] = (int *)malloc(2 * sizeof(int));
        for(i = 0; i < 2; i++)
                for(j = 0; j < 2; j++)
                        p[i][j] = i + j;
        printf("%d",p[0][0]);
        return 0;
    }
