#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal do programa
void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    float vetor[3], resultado; printf("Digite três notas separadas por espaços: "); scanf("%f %f %f", &vetor[0], &vetor[1], &vetor[2]);
    resultado = (vetor[0] + vetor[1] + vetor[2]) / 3; printf("\nA média entre %.1f %.1f %.1f é = %.1f", vetor[0], vetor[1], vetor[2], resultado);

    // Pula linhas
    printf("\n");

    // Pausa o programa
    system("pause");



}




/*  float vetor[3], resultado;
    vetor[0] = 0, vetor[1] = 0, vetor[2] = 0;
    printf("Digite três notas separadas por espaços: ");
    scanf("%f %f %f", &vetor[0], &vetor[1], &vetor[2]);
    resultado = (vetor[0] + vetor[1] + vetor[2]) / 3;
    printf("\nA média entre %.1f, %.1f e %.1f é = %.1f", vetor[0], vetor[1], vetor[2], resultado);
*/
