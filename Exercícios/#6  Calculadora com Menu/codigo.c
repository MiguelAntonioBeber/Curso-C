#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");


    float valor1, valor2;
    int opcao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Selecione uma opção: ");
    printf("\n1 - Somar");
    printf("\n2 - Subtrair");
    printf("\n3 - Dividir");
    printf("\n4 - Multiplicar\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("Resultado da soma: %.2f", valor1 + valor2 );
        break;
    case 2:
        printf("Resultado da subtração: %.2f", valor1 - valor2 );
        break;
    case 3:
        printf("Resultado da divisão: %.2f", valor1 / valor2 );
        break;
    case 4:
        printf("Resultado da multiplicação: %.2f", valor1 * valor2 );
        break;
    default:
        printf("Opção inválida!");
    }

    printf("\n");
}
