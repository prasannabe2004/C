    #include <stdio.h>
    int main(void) {
        char *p = "12345", *q = p - 10;
   
        printf("%d", q[14] - q[13]);
        return 0;
    }
