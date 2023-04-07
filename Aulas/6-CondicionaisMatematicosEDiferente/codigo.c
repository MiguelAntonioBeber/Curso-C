#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    //Definindo variaveis
    int a = 5, b = 10, c = 15;
    char d = 'x';

    //Maior
    if(a > 2){
        printf("\n%d é maior que 2", a);
    }

    // Maior ou iogual

    if(c >= b){
        printf("\n%d é maior ou igual que %d", c, b);
    }

    // Menor
    if(a < 10){
        printf("\n%d é menor que 10", a);
    }

    // Menor ou igual
    if(a <= 10){
        printf("\n%d é menor ou igual que 10", a);
    }

    // Diferente
    if(c != 10){
        printf("\n%d não é 10", c);
    }

    // Usando char
    if(d != 'a'){
        printf("\n%c não é a", d);
    }

    // Pula linha
    printf("\n");

    // Pausa o programa
    system("pause");
}
