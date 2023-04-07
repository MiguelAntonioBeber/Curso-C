#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    int num = 10;

    do{
        printf("\n%d", num);
        num--;
    }while(num >= 0);

}

