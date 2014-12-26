    #include <stdio.h>
    int main(void) {
        int i, t[5];
   
        t[4] = 0;
        for(i = 3; i >= 0; i--)
                t[i] = t[4] * i;
        printf("%d",t[0]);
        return 0;
    }
