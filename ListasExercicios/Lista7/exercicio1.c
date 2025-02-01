/*
Construa um programa que permita identificar o perfil da turma:
- Percentual de homens e de mulheres.
- Percentual de alunos maiores em idade.
- Idade da pessoa mais velha.
- Idade da pessoa mais nova.
Domínio dos dados:
Gênero: m/f, sendo ‘m’=masculino e ‘f’=feminino.
Idade: 0..100
* Deverão ser rejeitados os valores lidos fora do domínio (observe que aqui deve ser utilizada a est. de
rep. com teste no final)
* O número de alunos da turma deverá ser um valor lido
*/


#include <stdio.h>
#include <stdlib.h>

int main() {

    // Introdução
    printf("Este programa identifica informações sobre uma turma cadastrada.\n\n");

    // Declaração de variáveis
    int qtAlunos, idade, pessoaMaisVelha = 0, pessoaMaisNova = 100, countM = 0, countF = 0, countMaioresIdade = 0;
    char genero;
    float percentualM, percentualF, percentualMaioresIdade;

    // Coleta da quantidade de alunos
    do {
        printf("Informe a quantidade de alunos na turma (1 a 100): ");
        scanf("%i", &qtAlunos);
        if (qtAlunos <= 0 || qtAlunos > 100) {
            printf("Quantidade inválida! Digite um número entre 1 e 100.\n");
        }
    } while (qtAlunos <= 0 || qtAlunos > 100);

    // Coleta de dados e processamento
    for (int i = 1; i <= qtAlunos; i++) {
        // Entrada do gênero
        do {
            printf("Digite o gênero [M/F] da pessoa %i: ", i);
            scanf(" %c", &genero);
            if (genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f') {
                printf("Gênero inválido! Digite apenas 'M' ou 'F'.\n");
            }
        } while (genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f');

        // Contabiliza gênero
        if (genero == 'M' || genero == 'm') {
            countM++;
        } else {
            countF++;
        }

        // Entrada da idade
        do {
            printf("Digite a idade da pessoa %i (0 a 100): ", i);
            scanf("%i", &idade);
            if (idade < 0 || idade > 100) {
                printf("Idade inválida! Digite um número entre 0 e 100.\n");
            }
        } while (idade < 0 || idade > 100);

        // Contabiliza maiores de idade
        if (idade >= 18) {
            countMaioresIdade++;
        }

        // Atualiza idade mais velha e mais nova
        if (idade < pessoaMaisNova) {
            pessoaMaisNova = idade;
        }
        if (idade > pessoaMaisVelha) {
            pessoaMaisVelha = idade;
        }
    }

    // Cálculo dos percentuais
    percentualF = (countF * 100.0) / qtAlunos;
    percentualM = (countM * 100.0) / qtAlunos;
    percentualMaioresIdade = (countMaioresIdade * 100.0) / qtAlunos;

    // Exibição dos resultados
    printf("\n========== Resultados ==========\n");
    printf("Quantidade de alunos: %i\n", qtAlunos);
    printf("Percentual de alunos do gênero feminino: %.2f%%\n", percentualF);
    printf("Percentual de alunos do gênero masculino: %.2f%%\n", percentualM);
    printf("Percentual de alunos maiores de idade: %.2f%%\n", percentualMaioresIdade);
    printf("Idade da pessoa mais velha: %i anos\n", pessoaMaisVelha);
    printf("Idade da pessoa mais nova: %i anos\n", pessoaMaisNova);
    printf("================================\n");

    return 0;
}