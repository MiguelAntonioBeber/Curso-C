#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

// Função principal do programa
void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    int vetor[TAM], cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    // Adicionando 1 para cada posição
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;
    }


    // Imprimindo valores dos veoeres
    printf("\n Posição 0: %d", vetor[0]);
    printf("\n Posição 1: %d", vetor[1]);
    printf("\n Posição 2: %d", vetor[2]);

    // Imprimindo vetor em laço de repetição
    for(cont = 0; cont < TAM; cont++){
        printf("\n Posição %d: %d", cont, vetor[cont]);
    }

    // Lendo tres valores para o vetor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

    // Imprimindo vetor em laço de repetição
    for(cont = 0; cont < TAM; cont++){
        printf("\n Posição %d: %d", cont, vetor[cont]);
    }

    // Pula linhas
    printf("\n");

    //Pausa o programa
    system("pause");
}
