/*
Introdução a estrutura de repetição
Exercício: Construa um algoritmo que escreva os números inteiros de dez até um (ordem decrescente). Utilize
estrutura de repetição com teste no início.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa tem como objetivo, contar de 10 a 1\n\n");

    // Declaração de variável
    int count = 10;

    // Lógica e exibição
    /*
        While (Enquanto) é uma estrutura de repetição,
        que possui teste no início, O while irá repetir
        o trecho de código que estiver dentro dele, enquanto
        o teste lógico for verdadeiro
    */
    while(count >= 1){  
        printf("%i\n" , count);
        count --; // Decremento, utilizado para dar um fim
    }

    return 0;
}