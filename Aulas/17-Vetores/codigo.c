#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

// Fun��o principal do programa
void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    int vetor[TAM], cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    // Adicionando 1 para cada posi��o
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;
    }


    // Imprimindo valores dos veoeres
    printf("\n Posi��o 0: %d", vetor[0]);
    printf("\n Posi��o 1: %d", vetor[1]);
    printf("\n Posi��o 2: %d", vetor[2]);

    // Imprimindo vetor em la�o de repeti��o
    for(cont = 0; cont < TAM; cont++){
        printf("\n Posi��o %d: %d", cont, vetor[cont]);
    }

    // Lendo tres valores para o vetor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

    // Imprimindo vetor em la�o de repeti��o
    for(cont = 0; cont < TAM; cont++){
        printf("\n Posi��o %d: %d", cont, vetor[cont]);
    }

    // Pula linhas
    printf("\n");

    //Pausa o programa
    system("pause");
}
