    #include <stdio.h>
    #include <string.h>
    struct Q {
        char S[3];
    };
    struct S {
        struct Q Q;
    };
    int main(void) {
        struct S S = { '\0', '\0','\0' };
        S.Q.S[0] = 'A';
        S.Q.S[1] = 'B';
        printf("%d",strlen(S.Q.S));
        return 0;
    }
