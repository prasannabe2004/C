    #include <stdio.h>
    int main(void) {
        char t[] = { 'a', 'b', 'A', 'B' };
   
        printf("%d",t[1] - t[0] + t[3] - t[2]);
        return 0;
    }
