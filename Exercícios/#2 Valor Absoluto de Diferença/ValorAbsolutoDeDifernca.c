#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritimo que leia 2 notas e mostre o valor absoluto de diferença entre elas.

    int nota1, nota2;

    printf("Digita a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digita a segunda nota: ");
    scanf("%d", &nota2);

    printf("O valor absoluto da diferença entre %d e %d é = %d", nota1, nota2, abs(nota1 - nota2));

    printf("\n");

    system("pause");
}
