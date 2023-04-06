#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    // Definindo variaveis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicional simples
    if(a == 5){
        printf("\nA variavel a = 5");
    }else{
        printf("\nA variavel a não é = 5");
    }

    if(b == 2.5){
        printf("\nA variavel b = 2.5");
    }else {
        printf("\nA variavel b não é = 2.5");
    }

    if(c == 'x'){
        printf("\nA variavel c = letra x");
    }else{
        printf("\nA variavel c  não é = x");
    }

    // Numero par ou impar
    if (a % 2 == 1){
        printf("\nA variavel é impar");
    }else{
        printf("\nA variavel é par");
    }

    // Condicional composta
    if(opcao == 1){
        printf("\na opcao = 1");
    }else if(opcao ==2){
        printf("\na opcao = 2");
    }else {
        printf("\nA opcao não é igual a 1 e nem 2");
    }

    printf("\n");

    system("pause");

}
