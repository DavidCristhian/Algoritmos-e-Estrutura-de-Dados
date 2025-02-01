/*
Considere uma turma com n alunos, sendo n um valor lido. Construa um programa que leia as notas
obtidas pelos alunos [0..100]. Para cada nota lida, o programa deverá informar estar o aluno aprovado ou
não, sabendo ser sessenta a nota mínima requerida para aprovação. Ao final, o programa deverá informar
a nota média da turma, bem como a maior e a menor nota da turma.
Ao ler a nota de um aluno, rejeitar a leitura de nota inválida, sabendo ser cem a nota máxima.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Intro
    printf("Este programa calcula a média de uma turma, e também retorna a maior nota e a menor\n\n");

    // Declaração de variáveis
    int qtAlunos;
    float nota, maiorNota = 0, menorNota = 100, soma = 0, media;

    // Coleta de dados e processamento
    do{
        printf("Informe a quantidade de alunos, presente na turma: \n");
        scanf("%i" , &qtAlunos);
    }while(qtAlunos < 0 || qtAlunos > 100);

    for(int i = 1; i <= qtAlunos;i++){

        do{
            printf("Digite a nota, do aluno %i: \n" , i);
            scanf("%f" , &nota);
        }while(nota < 0 || nota > 100);

        soma += nota;

        if(nota < menorNota){
            menorNota = nota;
        }
        if(nota > maiorNota){
            maiorNota = nota;
        }

    }
    media = soma / qtAlunos;

    // Exibição
    printf("Quantidade de aluno: %i\n" , qtAlunos);
    printf("Média da turma: %.2f\n" , media);
    printf("Maior nota: %.2f\n" , maiorNota);
    printf("Menor nota: %.2f\n" , menorNota);

    return 0;
}