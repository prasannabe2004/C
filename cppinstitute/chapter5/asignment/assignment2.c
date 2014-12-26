    #include <stdio.h>
    int main(void) {
        char s[] = "ABCDE", *p = s + 5;
   
        printf("%d", p[-1] - *(p - 4));
        return 0;
    }
