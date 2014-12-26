   #include <stdio.h>
    int main(void) {
        char s[10] = "ABCDE", *p = s + 3;
   
        printf("%d", p[1] - p[-1]);
        return 0;
    } 
