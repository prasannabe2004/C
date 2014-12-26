    #include <stdio.h>
    struct S {
        int S;
    };
    int main(void) {
        struct S S;
        S.S = sizeof(struct S) / sizeof(S);
        printf("%d",S.S);
        return 0;
    } 
