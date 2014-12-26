    #include <stdio.h>
    struct S {
        int a[2];
    };
    int main(void) {
        struct S S[2];
        int i;
        for(i = 0; i < 2; i++)
                S[i].a[1-i] = 4 * !i;
        printf("%d",S[0].a[1]);
        return 0;
    }
