// Exercício: Construa um algoritmo que identifique qual o maior valor entre dois números reais lido

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa retorna o maior valor entre dois números digitados\n");

    // Declaração de variáveis
    float num1 , num2, maior;

    // Coleta de dados
    printf("\nDigite o primeiro número: ");
    scanf("%f" , &num1);
    printf("\nDigite o segundo número: ");
    scanf("%f" , &num2);

    // Lógica (introdução a condicionais)
    if(num1 > num2){ // Leitura de código: Se (if) variável num1 for maior que variável num2, logo a variávele maior recebera o valor da variável num1 
        maior = num1;
    } else{
        maior = num2; // Leitura de código: Se não (else) variável maior recebera o valor da variável num2
    }

    // Exibição de resultado
    printf("O maior valor entre %2.f e %2.f é: %2.f" , num1 , num2 , maior);

    return 0;
}