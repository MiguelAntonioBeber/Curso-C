#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite Usar acentos
    setlocale(LC_ALL, "");

    //Definindo variaveis
    int opcao;

    // Confere e valida a op��o
    while(opcao < 1 || opcao > 3){
        // Interface de menu
        printf("Escolha uma op��o: \n");
        printf("\n1-Op��o 1");
        printf("\n2-Op��o 2");
        printf("\n3-Op��o 3\n");

        // Pula linha
        printf("\n");

        // Lendo a op��o
        scanf("%d", &opcao);

        // Resultado de acordo com a op��o escolhida
        switch(opcao){
        case 1:
            printf("\nOp��o 1 foi escolhida!");
            break;
        case 2:
            printf("\nOp��o 2 foi escolhida!");
            break;
        case 3:
            printf("\nOp��o 3 foi escolhida!");
            break;
        default:
            printf("\nOp��o inv�lida!\n");
        }
    }

    // Pula linha
    printf("\n");

    //Pausa o programa
    system("pause");

}
