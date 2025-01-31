// Exercício: Soma de dois números

// Inclusão das bibliotecas padrões da linguagem C
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Comando para exibir mensagem na tela
    printf("\nEste programa executa a soma de dois números digitadas");

    // Declaração de variáveis 
    float num1;
    float num2;
    float soma;

    printf("\nDigite o primeiro número: ");
    //Comando para a leitura de dado atraves do teclado 
    scanf("%f" , &num1); //Estrutura do comando (Tipo do dado a ser lido, e após isso o local da memoria onde o dado será armazenado)

    printf("\nDigite o segundo número: ");
    scanf("%f" , &num2);

    // Operação, neste momento do código a variável soma está recebendo a soma dos dados que estão armazenados nas variáveis num1 e num2
    soma = num1 + num2;

    // Exibição do conteúdo que estão "setados" (armazenados) nas variáveis 
    printf("\nA soma entre %2.f e %2.f é: %2.f" , num1, num2, soma);

    return 0;
}