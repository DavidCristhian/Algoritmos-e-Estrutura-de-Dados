/*
Ler um número natural e verificar se é ele primo ou não. Um número natural é primo se é ele divisível
apenas por um e por si próprio.
Lembre-se que o conjunto dos números naturais é composto pelos valores inteiros e positivos.
Rejeitar a leitura de número inválido (não pertencente ao conjunto de números naturais).
Ao finalizar, permitir verificar um novo número, até que um número igual a zero (flag) seja fornecido.
Informar ao usuário ser o valor zero aquele que encerrará o programa.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Intro
    printf("Este programa faz a validação se um número é primo ou não.\n\n");
    printf("Caso queira parar o programa, digite 0 quando for pedido.\n");

    // Declaração de variáveis 
    int flag = 1, num, countRestoPrimo;

    // Coleta de dados
    do {
        do {
            printf("Digite o número: ");
            scanf("%d", &num);
            if (num < 0) {
                printf("Número fora do domínio dos números naturais! Tente novamente.\n");
            }
        } while (num < 0);

        // Zera a contagem de divisores
        countRestoPrimo = 0;

        // Processamento: Contando divisores
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                countRestoPrimo++;
            }
        }

        // Exibição do resultado
        if (countRestoPrimo == 2) {
            printf("O número %d é primo!\n", num);
        } else {
            printf("O número %d não é primo!\n", num);
        }

        // Pergunta se deseja continuar
        do{
            printf("Deseja continuar? (0 - não, 1 - sim): ");
            scanf("%d", &flag);
            if(flag != 0 && flag != 1){
                printf("Opção inválida! Tente novamente.\n");
            }
        } while (flag != 0 && flag != 1);
        
    } while (flag != 0);

    printf("Obrigado por usar o programa!\n");

    return 0;
}