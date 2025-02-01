/*
Construa um programa que leia um conjunto de n valores inteiros e positivos, sendo n também um valor
lido. O programa deverá calcular e escrever a quantidade de números pares e a quantidade de números
ímpares lidos.
Rejeitar a leitura de valores inválidos.
* Rejeitar a leitura de valores inválidos quando isto se mostrar necessário
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Intro
    printf("Este programa retorna, a quantidade de numeros ímpares e pares, de n termos digitados\n\n");

    // Declaração de variáveis
    int num, termos, countPares = 0, countImpares = 0;

    // Coleta de dados
    do{
        printf("Digite a quantidade de termos:");
        scanf("%i" , &termos);

        for(int i = 0; i < termos; i++){
            printf("Digite o número:");
            scanf("%i" , &num);

            // Processamento
            if(num % 2 == 0){
                countPares ++;
                printf("O número %i é par\n" , num);
            } else{
                countImpares ++;
                printf("O número %i é ímpar\n" , num);
            }
        }

    }while(num < 0 || termos < 1);

    printf("\nForam digitados %i números pares\n" , countPares);
    printf("\nForam digitados %i números ímpares\n" , countImpares);

    return 0;
}