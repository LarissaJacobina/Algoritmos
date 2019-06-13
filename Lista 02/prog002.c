#include<stdlib.h>
#include<stdio.h>


int main(){
 int dia, mes, ano, dians, mesns, anons,  resultado;

    printf("Digite o dia da data a ser comparada: ");
    scanf("%d",&dia);

    printf("digite o mes da data a ser comparada: ");
    scanf("%d",&mes);

    printf("digite o ano da data a ser comparada: ");
    scanf("%d",&ano);

    printf("Digite o dia do nascimento : ");
    scanf("%d",&dians);

    printf("Digite o mes do nascimento : ");
    scanf("%d",&mesns);

    printf("Digite o ano do nascimento : ");
    scanf("%d",&anons);

    resultado = (((dia - dians)*1) +((mes - mesns)*30) +((ano - anons)*365));

    printf("Dias vividos = %d ", resultado);

}