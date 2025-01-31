/*Tipos de triângulos:
Equilátero: Todos os três lados são iguais.
Isósceles: Dois lados são iguais e um é diferente.
Escaleno: Todos os lados são diferentes.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa retorna o tipo de triângulo digitado\n");

    // Declaração de variáveis 
    float lado1 , lado2, lado3;

    // Coleta de dados
    printf("\nDigite o primeiro lado: ");
    scanf("%f" , &lado1);
    printf("\nDigite o segundo lado: ");
    scanf("%f" , &lado2);
    printf("\nDigite o terceiro lado: ");
    scanf("%f" , &lado3);

    // Lógica e exibição
    if(lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2){
        if(lado1 == lado2 && lado2 == lado3){
            printf("\nO triângulo de lados %f  ,  %f  e  %f é considerado: Equilátero" , lado1 , lado2 , lado3);
        } else if((lado1 == lado2 && lado2 != lado3) || (lado2 == lado3 && lado3 != lado1) || (lado3 == lado1 && lado1 != lado2)){
            printf("\nO triângulo de lados %f  ,  %f  e  %f é considerado: Isósceles" , lado1 , lado2 , lado3);
        } else{
            printf("\nO triângulo de lados %f  ,  %f  e  %f é considerado: Escaleno" , lado1 , lado2 , lado3);
        }
    }
    
    return 0;
}