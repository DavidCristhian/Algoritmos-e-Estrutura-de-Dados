/*
Construa uma nova versão para o programa que identifica se é um ano lido bissexto ou não.
O programa deverá permitir ao usuário testar mais que um ano. Para isto, ao final, o programa deverá
enviar uma mensagem ao usuário questionando seu desejo de verificar um novo ano e ler a resposta do
usuário (S/N). De acordo com a resposta lida, uma nova iteração deverá ocorrer ou o programa ser
finalizado.
* O programa deverá rejeitar a leitura de valores diferentes de [S/N]. Caso isto ocorra, o programa
deverá repetir a leitura da resposta do usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Introdução
    printf("Este programa verifica se um ano é bissexto ou não.\n");

    // Declaração de variáveis
    int ano;
    char op;

    // Loop principal
    do {
        // Solicitação e validação da opção
        do {
            printf("\nDeseja verificar um ano? [S/s] Sim | [N/n] Não: ");
            scanf(" %c", &op);

            if (op != 'S' && op != 's' && op != 'N' && op != 'n') {
                printf("\nOpção inválida! Digite apenas 'S' ou 'N'.\n");
            }
        } while (op != 'S' && op != 's' && op != 'N' && op != 'n');

        // Se o usuário escolher continuar
        if (op == 'S' || op == 's') {
            printf("\nDigite o ano: ");
            scanf("%d", &ano);

            // Lógica para verificar se o ano é bissexto
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                printf("\nO ano %d é bissexto!\n", ano);
            } else {
                printf("\nO ano %d não é bissexto!\n", ano);
            }
        }

    } while (op == 'S' || op == 's'); // Continua enquanto o usuário quiser testar novos anos

    printf("\nObrigado por utilizar o programa!\n");

    return 0;
}