#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritimo que leia 2 notas e mostre a m�dia entre elas.

    //Define o valor das notas.
    float Nota1, Nota2;

    // Pergunta a primeira nota do aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &Nota1);

    // Pergunta a segunda nota do aluno.
    printf("Digite a segunda nota: ");
    scanf("%f", &Nota2);

    // Faz a m�dia das duas notas.
    printf("A m�dia entre %f e %f � igual a = %f", Nota1, Nota2, (Nota1 + Nota2) / 2);
}
