#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

// Função principal do programa
void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    //Imprime na tela
    printf("%d", TAM);

    int i;

    // Contagem até 10
    for(i = 1; i <= TAM; i++){
        printf("\n%d", i);
    }

    // Pula linhas
    printf("\n");

    // Pausa o programa
    system("pause");
}
