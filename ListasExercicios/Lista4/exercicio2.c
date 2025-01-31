/*Crie uma versão com o uso da estrutura switch da linguagem C.
Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e
mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir

================================ Tabela ================================
= Código                         Cargo                      Percentual =
========================================================================
=                                                                      =
=   1                          Escriturário                     50%    =
=   2                           Secretário                      35%    =
=   3                             Caixa                         20%    =
=   4                            Gerente                        10%    =
=   5                            Diretor                         0     =
========================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Intro
    printf("Este programa por meio de uma tabela, efetua o calculo referente ao almento de salário\n\n");
    printf("Tenha em mente que a tabela abaixo mostra os cargos e os respectivos percentuais");
    printf("\n\n================================ Tabela ================================\n");
    printf("= Código                         Cargo                      Percentual =\n");
    printf("========================================================================\n");
    printf("=                                                                      =\n");
    printf("=   1                          Escriturário                     50%    =\n");
    printf("=   2                           Secretário                      35%    =\n");
    printf("=   3                             Caixa                         20%    =\n");
    printf("=   4                            Gerente                        10%    =\n");
    printf("=   5                            Diretor                         0     =\n");
    printf("========================================================================\n");

    // Declaração de variáveis
    float salario , reajuste, almento;
    int op;

    // Coleta de dados
    printf("\nDigite o valor do salário atual: ");
    scanf("%f" , &salario);
    printf("Dada a tabela acima, digite o código: ");
    scanf("%i" , &op);

    // Lógica e processamento
    switch (op) // Switch case é uma estrutura condicional, ao qual a partir de uma expressão poderá tomar caminhos diferentes;
    {
    case 1:
        almento = salario * 50 / 100;
        reajuste = salario + almento;
        break;
    case 2:
        almento = salario * 35 / 100;
        reajuste = salario + almento;
        break;
    case 3:
        almento = salario * 20 / 100;
        reajuste = salario + almento;
        break;
    case 4:
        almento = salario * 10 / 100;
        reajuste = salario + almento;
        break;
    case 5:
        almento = salario * 0 / 100;
        reajuste = salario + almento;
        break;
    default:
        printf("\nCodigo invalido!");
        break;
    }

    // Exibição
    printf("\nO salrio era %2.f e passou a ser %2.f dado o sequinte almento %2.f" , salario , reajuste , almento);

    return 0;
}
