/*
Calcule e escreva os n primeiros termos Fibonacci, sendo n um valor lido. A sequência Fibonacci é
constituída dos seguintes termos:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Intro
    printf("Este programa faz o calculo fibonacci, com n termos lidos\n\n");

    // Declaração de variáveis
    int termos, a = 0, b = 1, c;

    // Coleta de dados
    printf("Digite a quantidade de termos: \n");
    scanf("%i" , &termos);

    // Lógica e exibição
    for(int i = 0; i < termos; i++){
        printf("%i %i %i" , a , b , c);
        c = a + b;
        a = b;
        b = c;
    }

    // Lógica explicada
    // a = 0 b = 1 c = 1
    // a = 1 b = 1 c = 2
    // a = 1 b = 2 c = 3
    // a = 2 b = 3 c = 5

    return 0;
}