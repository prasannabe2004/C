    #include <stdio.h>
    int main(void) {
        int t[2];
   
        t[0] = 1; t[1] = 0;
        printf("%d",t[t[t[t[t[0]]]]]);
        return 0;
    }
