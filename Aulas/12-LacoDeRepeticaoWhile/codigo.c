#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    // Definindo variaveis
    int a = 1;

    // Contando até dez
    while(a <= 10){
        // Imprimindo 'a' na tela
        printf("\n%d", a);

        // Incremento
        a++; // = a + 1;

    }

    // Contagem regregressiva
    int b = 10;

    while(b >= 1){
        // Imprimindo 'b' na tela
        printf("\n%d", b);

        //Incremento
        b--; // = b - 1;
    }

    // Pula linhas
    printf("\n");

    // Pausa o programa
    system("pause");
}
