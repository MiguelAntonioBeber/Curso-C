#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal do programa
void main(){

    setlocale(LC_ALL, "");

    int tamanho;
    printf("Qual será o tamanho do vetor? ");
    scanf("%d", &tamanho);
    float vetor[tamanho], soma;

    for(int cont = 0; cont < tamanho; cont++){
        printf("Digite um valor: "); scanf("%f", &vetor[cont]);
        soma = soma + vetor[cont];
    }
    for(int cont = 0; cont < tamanho; cont++){
        printf("\nVetor[%d] = %.1f", cont, vetor[cont]);
    }
    // Pula linhas
    printf("\n");
    printf("\nA média é = %.2f", soma / tamanho);

    system("pause");

}
