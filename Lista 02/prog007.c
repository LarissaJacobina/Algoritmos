#include <stdio.h>
int main(){
char s[100];
int i, t;
    printf("Digite uma palavra: ");
    scanf("%s",s);
    t = strlen(s);
    printf("Inversão = ");
    for(i = t-1; i>=0; i--)
    {   
        printf("%c" ,s[i]);
    }
return 0;
}
