#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
void main(){

    //Definindo variaveis
    int a = 6, b = 4;

    //Soma
    printf("\nA soma de %d e %d = %d\n", a, b, a + b);

    //Subtração
    printf("\nA subtracao de %d e %d = %d\n", a, b, a - b);

    //Divisão
    printf("\nA divisao de %d e %d = %d\n", a, b, a / b);

    //Multiplicação
    printf("\nA multiplicacao de %d e %d = %d\n", a, b, a * b);

    //Resto da divisão
    printf("\nO resto da divisão entre %d e %d = %d\n", a, b, a % b);

    //Valor absoluto
    printf("\nO valor absoluto de -3 = %d \n", abs(-3));

    // Pausa o programa após executar
    system("pause");
}
