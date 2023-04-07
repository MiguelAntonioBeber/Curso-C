#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    int num, i, aux = 0;

    printf("Digite um valor para saber se ele é primo: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
            if(num % i == 0){
                aux++;
            }
    }
    if(aux == 2){
        printf("O número %d é primo!", num);
    }else{
        printf("O número %d não é primo!", num);
    }
}
