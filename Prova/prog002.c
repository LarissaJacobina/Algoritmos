#include <stdio.h>
void main(){
    char v[10];
    int soma;
    for(int i = 0; i < 10; i++){
        printf("Informe uma letra:");
        scanf("%s", &v[i]);
    }
    for(int i = 0; i < 10; i++){
        if(v[i] = 'a'){
        soma = soma + i;
        }
    }
    printf("Soma das letras 'a'\n = %d", soma);
}