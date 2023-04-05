#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    // Definindo uma variavel
    int a = 5, b;

    // Imprimindo a varialvel "a"
    printf("%d", a);

    // Concatenando
    printf("\nO valor da var a eh: %d", a);

    // Mudando o valor de "a"
    a = 15;

    // Concatenando
    printf("\nO valor da var a eh: %d", a);

    // pula linhas
    printf("\n");

    // Lendo valores
    scanf("%d", &b);

    // Limpando o lixo do Buffer
    fflush(stdin);

    // Concatenando
    printf("\nO valor da variavel b eh: %d", b);

    // Pula linhas
    printf("\n");

    // Imprimindo
    printf("Uhuu\n");

    // Pausando
    system("pause");
}
