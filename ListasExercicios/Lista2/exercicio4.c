// Exercício: Construa um algoritmo que verifique qual o segundo maior valor entre três números reais lidos

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa retorna o segundo maior valor entre três números digitados\n");

    // Declaração de variáveis
    float num1 , num2, num3, segMaior;

    // Coleta de dados
    printf("\nDigite o primeiro número: ");
    scanf("%f" , &num1);
    printf("\nDigite o segundo número: ");
    scanf("%f" , &num2);
    printf("\nDigite o terceiro número: ");
    scanf("%f" , &num3);

    // Lógica
    if(num2 > num1 && num1 > num3){ // Leitura de código: se (If) num2 for maior que num1 e num1 for maior que num3, logo o segMaior recebe num1  
        segMaior = num1;
    } else if(num1 > num2 && num2 > num3){ // Leitura de código: se não se(else se) num1 for maior que num2 e num2 for maior que num3, logo segMaior recebe num2
        segMaior = num2;
    } else{ // Leitura de código: se não (else) maior recebe num3
        segMaior = num3;
    }

    // Exibição
    printf("\nO segundo maior número entre %2.f , %2.f e %2.f é: %2.f" , num1 , num2 , num3 , segMaior);


    return 0;
}