#include<stdlib.h>
#include<stdio.h>
int main(){
        int x;
        int l[50],i,j,k,a;
        x = 8;

        for (i = 1; i <= x; i++) {

            int p[i];

            for (k = x; k > i; k--) {
                printf(" ");
            }

            for (j = 0; j < i; j++) {

                if (j == 0 || j == (i - 1)) {
                    p[j] = 1;
                } else {
                    p[j] = l[j] + l[j - 1];
                }

                printf("%d  ",p[j] );
            }
             for (a = 0; a < j; a++) {
                 l[a] = p[a];

             }
            printf("\n");
        }
}