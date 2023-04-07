#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    int num = 10;

    while(num >= 0){
        printf("\n%d", num);
        num--;
    }

}
