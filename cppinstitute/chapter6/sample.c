    #include <stdio.h>
    #include <string.h>
    void f(char *s,int i) {
        *(s + i) = '\0';
    }
    int main(void) {
        char a[] = { 'a','b','c','d' };
        f(a+1,1);
        printf("%d",strlen(a));
        return 0;
    }
