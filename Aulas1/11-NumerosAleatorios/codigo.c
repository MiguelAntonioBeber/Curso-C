#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// Fun��o principal do programa
void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    // Responsavel para alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    // Variavel que recebe o resto da divis�o por 3 (Aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;

    // Variavel que recebe o resto da divis�o por 5 (Aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1;
    // Imprime o valor
    printf("%d", aleatorioSegundo);

    aleatorioSegundo = (rand() % 5) + 1;
    printf("%d", aleatorioSegundo);

    // Pausa o programa
    system("pause");

}
