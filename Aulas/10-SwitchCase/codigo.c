#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal do sistema
void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    // Definindo variaveis
    int a = 2;
    char b = 'x';

    // Menu com if
    if(a == 1){
        printf("\n Op��o escolhida: 1");
    }else if(a == 2){
        printf("\n Op��o escolhida: 2");
    }else if(a == 3){
        printf("\n Op��o escolhida: 3");
    }else{
        printf("\n Op��o inv�lida");
    }

    // Menu com switch case
    switch(a){
    case 1:
        printf("\n Op��o escolhida: 1");
        break;
    case 2:
        printf("\n Op��o escolhida: 2");
        break;
    case 3:
        printf("\n Op��o escolhida: 3");
        break;
    default:
        printf("\n Op��o inv�lida");
        break;
    }

    // Switch com char

    switch(b){
    case 'x':
        printf("\n A letra � x");
        break;
    default:
        printf("\n Op��o inv�lida");
        break;
    }

    // Pula linhas
    printf("\n");

    // Pausa o programa
    system ("pause");
}
