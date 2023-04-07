#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite Usar acentos
    setlocale(LC_ALL, "");

    //Definindo variaveis
    int opcao;

    // Confere e valida a opção
    while(opcao < 1 || opcao > 3){
        // Interface de menu
        printf("Escolha uma opção: \n");
        printf("\n1-Opção 1");
        printf("\n2-Opção 2");
        printf("\n3-Opção 3\n");

        // Pula linha
        printf("\n");

        // Lendo a opção
        scanf("%d", &opcao);

        // Resultado de acordo com a opção escolhida
        switch(opcao){
        case 1:
            printf("\nOpção 1 foi escolhida!");
            break;
        case 2:
            printf("\nOpção 2 foi escolhida!");
            break;
        case 3:
            printf("\nOpção 3 foi escolhida!");
            break;
        default:
            printf("\nOpção inválida!\n");
        }
    }

    // Pula linha
    printf("\n");

    //Pausa o programa
    system("pause");

}
