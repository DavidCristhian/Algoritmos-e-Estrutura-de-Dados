/*
Ler um conjunto de números inteiros e, ao final da leitura, informar a média dos valores lidos. O
processo de leitura deverá ser interrompido quando um número igual a zero for obtido (flag). Note que este
valor é unicamente o indicativo de término, não devendo ser considerado para os cálculos que envolvem os
demais números lidos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Intro
    printf("Este programa, realiza a média valores inteiros lidos\n\n");

    // Declaração de variáveis
    int num = 1, soma = 0, media = 0, count = 0;;

    // Lógica e processamento
    do{
        printf("\nDigite o número: ");
        scanf("%i" , &num);
        if(num != 0){
            soma += num;
            count ++;
        }
    }while(num != 0);

    media = soma / count;

    // Exibição
    printf("A média dos números digitados é de: %i" , media);

    return 0;
}