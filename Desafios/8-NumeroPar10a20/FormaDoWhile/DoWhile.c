#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

        int num = 10;

        do{
            if(num % 2 == 0){
                printf("%d � par! \n", num);
            }else{
                printf("%d � impar! \n", num);
            }
            num++;
        }while(num <= 20);

}
