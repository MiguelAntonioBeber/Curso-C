#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal do programa
void main(){

    setlocale(LC_ALL, "");

    int tamanho;
    printf("Qual ser� o tamanho do vetor? ");
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
    printf("\nA m�dia � = %.2f", soma / tamanho);

    system("pause");

}
