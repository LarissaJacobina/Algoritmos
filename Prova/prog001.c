#include <stdio.h>

void main(){
    int soma;
    for(int i = 0; i <=20; i++){
        if(i%2 == 0){
        soma = soma + i;
        }
    }
    printf("Soma dos pares = %d\n", soma);
}