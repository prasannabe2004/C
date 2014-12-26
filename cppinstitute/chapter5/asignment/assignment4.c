    #include <stdio.h>
    int main(void) {
        int t[] = { 1, 2, 3, 4, 5 }, *p = t;
   
        *p++;
        (*p)++;
        *p++;
        printf("%d",p[-1]);
        return 0;
    }
