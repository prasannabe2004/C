  #include <stdio.h>
    int main(void) {
        int *(t[10]);
        int *u[10];
        printf("%d",sizeof(t) != sizeof(u));
        return 0;
    }
