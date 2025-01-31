// Exercício: Construa um algoritmo que verifique qual o maior valor entre três números reais lidos

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa retorna o mair valor entre três números digitados\n");


    // Declaração de variáveis
    float num1 , num2, num3, maior;

    // Coleta de dados
    printf("\nDigite o primeiro número: ");
    scanf("%f" , &num1);
    printf("\nDigite o segundo número: ");
    scanf("%f" , &num2);
    printf("\nDigite o terceiro número: ");
    scanf("%f" , &num3);

    // Lógica
    if(num1 > num2 && num1 > num3){ // Leitura de código: se (If) num1 for maior que num2 e num1 for maior que num3, logo maior recebe num1  
        maior = num1;
    } else if(num2 > num1 && num2 > num3){ // Leitura de código: se não se(else se) num2 for maior que num1 e num2 for maior que num3, logo maior recebe num2
        maior = num2;
    } else{ // Leitura de código: se não (else) maior recebe num3
        maior = num3;
    }

    // Exibição
    printf("\nO maior número entre %2.f , %2.f e %2.f é: %2.f" , num1 , num2 , num3 , maior);


    return 0;
}