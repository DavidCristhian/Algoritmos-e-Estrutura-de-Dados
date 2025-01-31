/*
Introdução a estrutura de repetição
Exercício: Na lista anterior, foi elaborado um programa que proveu as funcionalidades de uma calculadora para as
quatro operações aritméticas. Elas foram oferecidas através de um menu e a opção do usuário foi tratada
através da instrução switch. Crie uma nova versão para a calculadora. Nela, acrescente ao programa a
possibilidade de mais que um cálculo ser realizado Para isto, após a escrita do resultado de cada
operação, o fluxo de execução deverá voltar à apresentação do menu ao usuário do programa. Desta
forma, o menu deverá ser alterado acrescentando a ele uma nova opção: “0 - sair do programa”. Esta
deverá ser a primeira opção do menu. Quando selecionada, a mensagem “Obrigado por usar este
programa” deverá ser escrita e o programa finalizado. Caso contrário, tratar a operação aritmética
selecionada ou informar tratar-se de uma opção inválida.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Introdução
    printf("\nCalculadora\n");
    printf("\nTenha em mente que a tabela abaixo mostra as operações disponíveis");
    printf("\n\n=========================== Tabela ==========================\n");
    printf("= Código                        Operação                        =\n");
    printf("================================================================\n");
    printf("=   0                             Sair                          =\n");
    printf("=   1                        Mudar números                      =\n");
    printf("=   2                            Adição                         =\n");
    printf("=   3                           Subtração                       =\n");
    printf("=   4                            Divisão                        =\n");
    printf("=   5                          Multiplicação                    =\n");
    printf("================================================================\n");

    // Declaração de variáveis
    float num1, num2, resultado;
    int op;

    // Coleta de dados iniciais
    printf("\nDigite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Loop principal da calculadora
    do {
        // Exibir menu e pedir opção
        printf("\nEscolha uma operação (0 para sair): ");
        scanf("%d", &op);

        // Processar a escolha do usuário
        switch (op) {
            case 0:
                printf("\nObrigado por usar este programa!\n");
                break;
            case 1:
                printf("\nDigite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                break;
            case 2:
                resultado = num1 + num2;
                printf("\nA soma entre %.2f e %.2f é: %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 - num2;
                printf("\nA subtração entre %.2f e %.2f é: %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("\nErro! Não é possível dividir por zero.\n");
                } else {
                    resultado = num1 / num2;
                    printf("\nA divisão entre %.2f e %.2f é: %.2f\n", num1, num2, resultado);
                }
                break;
            case 5:
                resultado = num1 * num2;
                printf("\nA multiplicação entre %.2f e %.2f é: %.2f\n", num1, num2, resultado);
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }

    } while (op != 0);

    return 0;
}