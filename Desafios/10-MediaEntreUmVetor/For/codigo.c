#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal do programa
void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    // Declarando variaveis
    float vetor[3];

    // Opera��o de m�dia de um vetor dentro de um for
    for(int cont = 0; cont < 3; cont++){
        printf("Digite um valor: "); scanf("%f", &vetor[cont]);
    }
    for(int cont = 0; cont < 3; cont++){
        printf("\nVetor[%d] = %.1f", cont, vetor[cont]);
    }
    printf("\n");
    printf("\nA M�dia entre %.2f, %.1f e %.1f � = %.2f", vetor[0], vetor[1], vetor[2], (vetor[0] + vetor[1] + vetor[2]) / 3);


    //Pula linha
    printf("\n");

    // Pausa o programa
    system("pause");
}
