 #include <stdio.h>
    int main(void) {
        int t[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, *p = t + 4;
   
        p += *p;
        printf("%d",*p);
        return 0;
    }
