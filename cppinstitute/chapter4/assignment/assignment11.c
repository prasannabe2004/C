    #include <stdio.h>
    int main(void) {
        int i = 1, *j = &i, **k = &j;
   
        printf("%d",**k);
        return 0;
    }
