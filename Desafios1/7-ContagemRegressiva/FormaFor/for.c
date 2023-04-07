
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    int num = 10;

    for(num = 10; num >= 0; num--){
        printf("\n%d", num);
    }

}
