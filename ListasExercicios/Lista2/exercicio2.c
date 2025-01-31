// Exercício: Construa um algoritmo que identifique se é um inteiro lido par ou ímpar

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa retorna se o valor digitado é impar ou par\n");

    // Declaração de variável
    int num;

    // Coleta de dados
    printf("\nDigite o número: ");
    scanf("%i" , &num);

    // Lógica e exibição 
    if(num % 2 == 0){ // Leitura de código: se (If) o número digitado possuir o resto de divisão igual a zero, logo o mesmo será considerado par
        printf("O número %i é par" , num);
    } else{ // Leitura de código: se não (else) o número digitado possuir o resto de divisão diferente de zero, logo o mesmo será considerado ímpar
        printf("O número %i é ímpar" , num);
    }

    return 0;
}