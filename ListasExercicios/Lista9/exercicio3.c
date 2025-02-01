/*
Ler um inteiro qualquer.
Calcular e escrever o número de divisores que o número lido possui.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Intro
    printf("Este programa calcula o número de divisores, de um número inteiro positivo lido\n\n");

    // Declaração de variáveis
    int num, countDivisores = 0;

    // Coleta de dados
    do{
        printf("\nDigite o número: ");
        scanf("%i" , &num);
    }while (num < 0);

    // Lógica
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            countDivisores ++;
        }
    }

    // Exibição
    printf("\nO número %i possui %i divisores" , num , countDivisores);

    return 0;
}