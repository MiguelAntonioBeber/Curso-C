#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

// Fun��o principal de programa
void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    // Definindo vari�veis
    bool a = true, b = false;

    // Se a for verdadeiro
    if(a){
        printf("\nA � verdadeiro");
    }

    // Comparando o B
    if(b){
        printf("\nB � verdadeiro");
    }else{
        printf("\nB � falso");
    }

    // Comparando uma falsidade
    if(!b){
        printf("\nB � falso");
    }

    // Pula linhas
    printf("\n");

    // Pausa o programa
    system("pause");

}
