/*
Introdução a estrutura de repetição
Exercício: Construa um algoritmo que escreva os números inteiros de dez até um (ordem decrescente). Utilize
estrutura de repetição com teste no final.
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
        Do While (Faça enquanto) é uma estrutura de repetição,
        que possui teste no fim, O do while irá repetir
        o trecho de código que estiver dentro dele, enquanto
        o teste lógico for verdadeiro, porém a primeira
        repetição sempre irá acontecer
    */
    do{
        printf("%i\n" , count);
        count --;
    }while(count >= 10);

    return 0;
}