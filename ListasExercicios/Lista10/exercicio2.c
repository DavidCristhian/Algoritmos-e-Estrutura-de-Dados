/*
Construa um programa que leia uma sequência de números naturais. A leitura deverá ser finalizada com
flag igual a zero. Ao interromper a leitura, o programa deverá informar o percentual de números pares lidos
cujo valor esteja no intervalo entre 1.000 e 10.000
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Intro
    printf("Este programa calcula o persentual de números pares lidos, dentro de um dominio\n\n");

    // Declaração de variáveis
    int num, countPares = 0, countTotal = 0;
    float persentualPares;

    // Coleta de dados
    do{
        printf("Digite um número, caso queira parar digite 0: ");
        scanf("%i" , &num);

        // Lógica
        if(num > 0){
            if(num >= 1000 && num <= 10000){
                if(num % 2 == 0){
                    countPares ++;
                }
            }

            countTotal ++;
        }
    }while(num > 0 && num != 0);

    // Processamento
    persentualPares = (countPares * 100) / countTotal;

    // Exibição
    printf("\nForam lidos %i numeros" , countTotal);
    printf("\nForam lidos %i numeros pares, dentro do intervalo de 1.000 a 10.000" , countPares);
    printf("\nO persentual de números pares lidos é de, dentro do intervalo de 1.000 a 10.000: %f" , persentualPares);

    return 0;
}