   #include <stdio.h>
    int main(void) {
        int t[2][2] = { 1, 2, 4, 8 };
        int s = 0, i, j;
   
        for(i = 2; i; i -= 2)
                for(j = 1; j < 2; j += 2)
                        s += t[i - 1][j];
        printf("%d",s);
        return 0;
    }
