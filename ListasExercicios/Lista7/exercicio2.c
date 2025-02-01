/*
Construir uma nova versão para o seguinte problema: ler a nota obtida por cada aluno da turma. A
leitura deverá ser interrompida quando for informada uma nota igual a zero (flag). Ao final do programa,
deverão ser escritos o percentual de alunos aprovados e o percentual de alunos reprovados, sabendo ser
requerida uma nota mínima igual a 60 para a aprovação do aluno.
Domínio da nota: 0..100 – Rejeitar a leitura de valores inválidos (fora do domínio)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Intro
    printf("Este programa calcula a média de uma turma, e também retorna a maior nota e a menor\n\n");

    // Declaração de variáveis
    int qtAlunos = 0, qtAprovados = 0, qtReprovados = 0;
    float nota, persentualAprovados = 0, persentualReprovados = 0;

    // Coleta de dados e processamento
    do{
        printf("Informe a quantidade de alunos, presente na turma: \n");
        scanf("%i" , &qtAlunos);
    }while(qtAlunos < 0 || qtAlunos > 100);

    for(int i = 1; i <= qtAlunos;i++){

        do{
            printf("Digite a nota, do aluno %i: \n" , i);
            scanf("%f" , &nota);

            if(nota < 60){
                qtReprovados ++;
            }
            if(nota > 60){
                qtAprovados ++;
            }
            
        }while(nota < 1 && nota > 100 && nota != 0);

    }
    persentualAprovados = (qtAprovados * 100) / qtAlunos;
    persentualReprovados = (qtReprovados * 100) / qtAlunos;

    // Exibição
    printf("Quantidade de aluno: %i\n" , qtAlunos);
    printf("Percentual de aluno aprovados: %.2f\n" , persentualAprovados);
    printf("Percentual de aluno reprovados: %.2f\n" , persentualReprovados);

    return 0;
}