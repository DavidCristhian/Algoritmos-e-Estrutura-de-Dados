/*
Calcular e escrever o valor de H, sendo H igual a:
H = 1/1 + 1/3 + 1/9 + 1/27 + ...
H com precisão de N termos, sendo N um valor lido.
Obs: não se esqueça que o operador de divisão em C é sobrecarregado: divisão inteira e divisão real – a
operação é definida em termos do tipo dos operandos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Intro 
    printf("Este programa retorna uma sequência H, com n termos recebidos\n\n");

    // Declaração de variáveis
    int numerador = 1 , denominador = 1 , termos;

    // Coleta de dados
    printf("Digite a quantidade de termos da sequência: \n");
    scanf("%i" , &termos);

    // Lógica e exibição
    for(int i = 0; i < termos; i++){
        printf("%i / %i\n" , numerador, denominador);
        denominador *= 3;
    }

    return 0;
}