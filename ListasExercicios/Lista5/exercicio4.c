/*
Introdução a estrutura de repetição
Exercício: Construa uma nova versão para o programa que calcula o peso ideal de uma pessoa. Nela, rejeite a
leitura de dados fora do domínio em ambos os casos, altura e sexo. Considere os seguintes domínios:
Sexo: ‘M’, ‘m’, ‘F’, ‘f’
Altura: 0..2,5
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Introdução
    printf("Este programa calcula o peso ideal com base no gênero e na altura.\n\n");

    // Declaração de variáveis
    char genero;
    float altura, pesoIdeal;

    // Coleta de dados com repetição
    /*
        Leitura de código: O trecho dentro do while
        (Faça enquanto) será feito pelo menos 1 vez,
        caso a condição dentro do while() der true (verdadeira)
        o código será repetido demais vezes, até que a condição der false (falsa)
    */
    do{
        printf("Digite a sua altura (em metros): ");
        scanf("%f", &altura);
        if(altura < 0 || altura > 2.5){
            printf("\nAltura inválida!, fora de domínio, tente novamente.\n");
        }
    } while(altura < 0 || altura > 2.5);
    do{
        printf("Digite o gênero (M/F): ");
        scanf(" %c", &genero);
        if(genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f'){
            printf("\nGênero inválido!, fora de domínio, tente novamente.\n");
        }
    } while(genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f');


    // Lógica
    if (genero == 'M' || genero == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (genero == 'F' || genero == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("\nInfelizmente, o gênero digitado está inválido!\n");
    }

    // Exibir resultado
    printf("\nEstima-se que, com o gênero %c e altura %.2f m, o peso ideal é: %.2f kg\n", genero, altura, pesoIdeal);

    return 0;
}