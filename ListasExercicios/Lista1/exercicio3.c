// Exercício: Numero de dias vividos ate o ultimo aniversario, desconsidere ano bissexto

// Inclusão das bibliotecas padrões da linguagem C
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Comando para exibir mensagem na tela
    printf("\nEste programa executa o calculo de dias vividos, através da idade, sem considerar ano bissextos");

    // Declaração de variáveis 
    int idade, diasVividos;

    printf("\n\nDigite a sua idade: ");
    //Comando para a leitura de dado atraves do teclado 
    scanf(" %d" , &idade);

    // Operação
    diasVividos = idade * 365;

    // Exibição
    printf("Com a idade %i estipula se que você tenha vivido %i dias" , idade, diasVividos);

    return 0;
}