// Exercício: Soma de área e Perimetro de um quadrado:

// Inclusão das bibliotecas padrões da linguagem C
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Comando para exibir mensagem na tela
    printf("\nEste programa calcula a área e o perimetro de um quadrado\n");

    // Declaração de variáveis 
    float lado , area , perimetro;

    printf("\nDigite o valor do lado do quadrado: ");
    //Comando para a leitura de dado atraves do teclado
    scanf("%f" , &lado);

    // Operação para calcular á área do quadrado
    area = lado * 2;

    // Operação para calcular o perimetro do quadrado
    perimetro = lado * lado;

    // Exibição do resultado das operações
    printf("\nO resultado do perimetro e da área, de um quadrado de lado %2.f é:" , lado);
    printf("\nPerimetro: %2.f" , perimetro);
    printf("\nÁrea: %2.f" , area);

    return 0;
}