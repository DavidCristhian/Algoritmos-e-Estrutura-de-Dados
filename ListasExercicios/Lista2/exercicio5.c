/*
Exercício: Refaça os programas do cálculo do peso ideal de uma pessoa, unificando ambos, peso ideal de pessoas
do gênero masculino e do gênero feminino. O usuário deverá informar o gênero através de um único
caractere, ‘M’ ou ‘F’, representando masculino ou feminino, respectivamente
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Introdução
    printf("Este programa calcula o peso ideal com base no gênero e na altura.\n\n");

    // Declaração de variáveis
    char genero;
    float altura, pesoIdeal;

    // Coleta de dados
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o gênero (M/F): ");
    scanf(" %c", &genero);

    // Lógica
    if (genero == 'M' || genero == 'm') { // Leitura de código: se (If) o genero digitado estiver no domínio M / m, o programa irá proceguir com o código dentro deste IF
        pesoIdeal = (72.7 * altura) - 58;
    } else if (genero == 'F' || genero == 'f') { // Leitura de código: senão se (Else if) o genero digitado estiver no domínio F / f, o programa irá proceguir com o código dentro deste else if
        pesoIdeal = (62.1 * altura) - 44.7;
    } else { // Leitura de código: senão (else) o genero digitado estiver fora do domínio M / m - F / f, o programa irá proceguir com o código dentro deste else
        printf("\nInfelizmente, o gênero digitado está inválido!\n");
    }

    // Exibir resultado
    printf("\nEstima-se que, com o gênero %c e altura %.2f m, o peso ideal é: %.2f kg\n", genero, altura, pesoIdeal);

    return 0;
}