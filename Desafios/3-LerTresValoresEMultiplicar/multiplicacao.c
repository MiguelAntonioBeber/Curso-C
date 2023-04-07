#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    // Crie um algoritimo que leia 3 números inteiros de uma só vez e
    // Coloque o resultado da multiplicação em uma variavel propria,
    // depois exiba esta variavel.

    // Define variaveis n1, n2, n3 e resultado
    int n1, n2, n3, resultado;

    // Lendo valor das variaveis
    printf("Digite tres número separados por espaços: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // resultado da muitiplicação
    resultado = n1 * n2 * n3;

    // Imprimindo o resultado.
    printf("A multiplicção entre %d, %d e %d é = %d", n1, n2, n3, resultado);

}
