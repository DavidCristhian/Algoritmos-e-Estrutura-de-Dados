/*Identificar se um ano lido é bissexto ou não. Pesquise o que deve ser observado para verificar se um ano
é bissexto*/

/*Divisibilidade por 4: Um ano é bissexto se ele for divisível por 4.

Exceção para anos múltiplos de 100: Se o ano for divisível por 100, ele não é bissexto, a menos que...

Divisibilidade por 400: Se o ano for divisível por 400, então ele é bissexto.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa retorna se o ano lido é considerado bissexto ou não\n");

    // Declaração de variáveis 
    int ano;

    // Coleta de dados
    printf("\nDigite o ano: ");
    scanf("%i" , &ano);

    // Lógica e Exibição

    /* Leitura de código: se (If) ano dividido por 4 dar o resto de divisão igual a zero e
       ano dividido por 100 dar o resto de divisão diferente de zero ou
       ano dividido por 400 dar o resto de divisão igual a zero, logo o ano poderá ser
       considerado bissexto.
    */ 
    if( (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){ 
        printf("\nO ano %i é considerado ano bissexto!");
    } else{ // Leitura de código: se não (else) não poderá ser considerado um ano bissexto;
        printf("\nO ano %i não pode ser considerado um ano bissexto!");
    }



    return 0;
}