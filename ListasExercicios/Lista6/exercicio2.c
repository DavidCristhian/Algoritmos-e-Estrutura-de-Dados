/*
Calcular e escrever a potenciação. A base e o expoente deverão ser valores lidos – rejeitar a leitura de
valores inválidos.
Considere: base um valor real.
Expoente: um número natural: inteiro, positivo ou nulo(zero).
Obs: Não usar a biblioteca math.h. A potenciação deverá ser calculada de forma iterativa.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Introdução
    printf("Este programa calcula a potenciação sem utilizar math.h\n");

    // Declaração de variáveis
    float base, resultado = 1;
    int expoente;

    // Coleta de dados
    printf("Digite a base: ");
    scanf("%f", &base);
    
    do {
        printf("Digite o expoente (número natural): ");
        scanf("%d", &expoente);
        if (expoente < 0) {
            printf("O expoente deve ser um número natural (inteiro positivo ou zero).\n");
        }
    } while (expoente < 0);

    // Caso especial: expoente 0
    if (expoente == 0) {
        resultado = 1;
    } else {
        // Cálculo da potência iterativamente
        for (int i = 0; i < expoente; i++) {
            resultado *= base;
        }
    }

    // Exibição do resultado
    printf("O resultado de %.2f elevado a %d é: %.2f\n", base, expoente, resultado);

    return 0;
}