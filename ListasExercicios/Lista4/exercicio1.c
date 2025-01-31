//Ler três valores inteiros. Escrevê-los em ordem decrescente

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa retorna uma sequencia decrescente de três números lidos\n\n");

    // Declaração de variáveis
    int val1, val2, val3;

    // Coleta de dados
    printf("\nDigite o primeiro valor: ");
    scanf("%i" , &val1);
    printf("\nDigite o segundo valor: ");
    scanf("%i" , &val2);
    printf("\nDigite o terceiro valor: ");
    scanf("%i" , &val3);

    // Lógica
    // Etapa de verificação se o val1 é o maior número da seguência
    if(val1 >= val2 && val1 >= val3){
        if(val2 >= val3){ //Verificação dos numeros subsequentes
            printf("Ordem decrescente: %i  ,  %i  ,  %i" , val1, val2, val3);
        }else{
            printf("Ordem decrescente: %i  ,  %i  ,  %i" , val1, val3, val2);
        }
    }
    // Etapa de verificação se o val2 é o maior número da seguência
    if(val2 >= val1 && val2 >= val3){
        if(val1 >= val3){ //Verificação dos numeros subsequentes
            printf("Ordem decrescente: %i  ,  %i  ,  %i" , val2, val1, val3);
        }else{
            printf("Ordem decrescente: %i  ,  %i  ,  %i" , val2, val3, val1);
        }
    } 
    // Etapa de verificação se o val3 é o maior número da seguência
    if(val3 >= val1 && val3 >= val2){
        if(val1 >= val2){ //Verificação dos numeros subsequentes
            printf("Ordem decrescente: %i  ,  %i  ,  %i" , val3, val1, val2);
        }else{
            printf("Ordem decrescente: %i  ,  %i  ,  %i" , val3, val2, val1);
        }
    }

    return 0;
}