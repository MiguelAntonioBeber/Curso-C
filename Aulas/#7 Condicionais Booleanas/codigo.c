#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

// Função principal de programa
void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    // Definindo variáveis
    bool a = true, b = false;

    // Se a for verdadeiro
    if(a){
        printf("\nA é verdadeiro");
    }

    // Comparando o B
    if(b){
        printf("\nB é verdadeiro");
    }else{
        printf("\nB é falso");
    }

    // Comparando uma falsidade
    if(!b){
        printf("\nB é falso");
    }

    // Pula linhas
    printf("\n");

    // Pausa o programa
    system("pause");

}
