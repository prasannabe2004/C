   #include <stdio.h>
    #include <stdlib.h>
    struct S {
        int           a;
        struct S *b;
    };
    int main(void) {
        struct S *x = malloc(sizeof(struct S));
        struct S *y = malloc(sizeof(struct S));
        x->a = 2;
        x->b = y;
        y->a = 4;
        y->b = x;
        printf("%d",x->b->b->b->a);
        free(x); free(y);
        return 0;
    }
