#include <stdio.h>
#include <stdlib.h>

// Fun��o principal do programa
void main(){

    //Definindo variaveis
    int a = 6, b = 4;

    //Soma
    printf("\nA soma de %d e %d = %d\n", a, b, a + b);

    //Subtra��o
    printf("\nA subtracao de %d e %d = %d\n", a, b, a - b);

    //Divis�o
    printf("\nA divisao de %d e %d = %d\n", a, b, a / b);

    //Multiplica��o
    printf("\nA multiplicacao de %d e %d = %d\n", a, b, a * b);

    //Resto da divis�o
    printf("\nO resto da divis�o entre %d e %d = %d\n", a, b, a % b);

    //Valor absoluto
    printf("\nO valor absoluto de -3 = %d \n", abs(-3));

    // Pausa o programa ap�s executar
    system("pause");
}
