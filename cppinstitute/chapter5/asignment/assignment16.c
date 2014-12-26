    #include <stdio.h>
    struct Q {
        int a,b,c;
    };
    struct S {
        int a,b,c;
        struct Q Q;
    };
    int main(void) {
        struct Q Q = { 3,2,1 };
        struct S S = { 4,5,6 };
        S.Q = Q;
        printf("%d",S.b - S.Q.b);
        return 0;
    }
