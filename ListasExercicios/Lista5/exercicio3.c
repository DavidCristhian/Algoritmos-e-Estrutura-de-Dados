/*
Introdução a estrutura de repetição
Exercício: Construa um programa que escreva os números inteiros de dez até um (ordem decrescente). Utilize
estrutura de repetição com variável de controle.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa tem como objetivo, contar de 10 a 1\n\n");

    // Lógica e exibição
    for(int i = 10; i >= 1; i--){ //For (Para) é uma estrutura de repetição, em palavras simples o for é um looping, onde a um início, fim e condição de incremento ou decremento
        printf("%i\n" , i);
    }


    return 0;
}