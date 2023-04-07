#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    int num = 0;

    for(num = 10; num <= 20; num++){
        if(num % 2 == 0){
            printf("%d é par! \n", num);
        }else{
            printf("%d é impar! \n", num);
        }
    }

}

