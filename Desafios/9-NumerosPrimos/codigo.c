#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    int num, i, aux = 0;

    printf("Digite um valor para saber se ele � primo: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
            if(num % i == 0){
                aux++;
            }
    }
    if(aux == 2){
        printf("O n�mero %d � primo!", num);
    }else{
        printf("O n�mero %d n�o � primo!", num);
    }
}
