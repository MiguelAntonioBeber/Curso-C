#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

// Fun��o principal do programa
void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    //Imprime na tela
    printf("%d", TAM);

    int i;

    // Contagem at� 10
    for(i = 1; i <= TAM; i++){
        printf("\n%d", i);
    }

    // Pula linhas
    printf("\n");

    // Pausa o programa
    system("pause");
}
