#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    // Crie um algoritimo que leia 3 n�meros inteiros de uma s� vez e
    // Coloque o resultado da multiplica��o em uma variavel propria,
    // depois exiba esta variavel.

    // Define variaveis n1, n2, n3 e resultado
    int n1, n2, n3, resultado;

    // Lendo valor das variaveis
    printf("Digite tres n�mero separados por espa�os: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // resultado da muitiplica��o
    resultado = n1 * n2 * n3;

    // Imprimindo o resultado.
    printf("A multiplic��o entre %d, %d e %d � = %d", n1, n2, n3, resultado);

}
