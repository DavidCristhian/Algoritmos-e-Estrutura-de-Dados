/*
Uma empresa deseja aprimorar sua política de salários. Para isso, deseja saber:
- o percentual de funcionários com salário igual ao salário mínimo;
- a amplitude salarial (diferença entre o maior e o menor salário da empresa)
O valor do salário mínimo também deverá ser um valor lido. Considere que a empresa tenha n
funcionários, sendo n também um valor lido.
Rejeitar a leitura de valores inválidos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Intro
    printf("Este programa calcula o percentual de funcionários com salário mínimo e a amplitude salarial.\n\n");

    // Declaração de variáveis
    int numFuncionarios, countSalarioMinimo = 0;
    float salario, salarioMinimo, maiorSalario = 0, menorSalario = 100000000, amplitudeSalarial, percentualSalarioMinimo;

    // Entrada do número de funcionários
    do {
        printf("Digite o número de funcionários: ");
        scanf("%d", &numFuncionarios);

        if (numFuncionarios < 1) {
            printf("Valor inválido! O número de funcionários deve ser maior que zero.\n");
        }
    } while (numFuncionarios < 1);

    // Entrada do salário mínimo
    do {
        printf("Digite o valor do salário mínimo: ");
        scanf("%f", &salarioMinimo);

        if (salarioMinimo <= 0) {
            printf("Valor inválido! O salário mínimo deve ser maior que zero.\n");
        }
    } while (salarioMinimo <= 0);

    // Entrada dos salários
    for (int i = 0; i < numFuncionarios; i++) {
        do {
            printf("Digite o salário do funcionário %d: ", i + 1);
            scanf("%f", &salario);

            if (salario < 0) {
                printf("Valor inválido! O salário deve ser positivo.\n");
            }
        } while (salario < 0);

        if (salario == salarioMinimo) {
            countSalarioMinimo++;
        }

        if (salario < menorSalario) {
            menorSalario = salario;
        }

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
    }

    // Processamento
    amplitudeSalarial = maiorSalario - menorSalario;
    percentualSalarioMinimo = ((float)countSalarioMinimo / numFuncionarios) * 100;

    // Exibição dos resultados
    printf("\nO maior salário cadastrado é: %.2f", maiorSalario);
    printf("\nO menor salário cadastrado é: %.2f", menorSalario);
    printf("\nO percentual de funcionários com salário mínimo: %.2f%%", percentualSalarioMinimo);
    printf("\nA amplitude salarial é: %.2f\n", amplitudeSalarial);

    return 0;
}