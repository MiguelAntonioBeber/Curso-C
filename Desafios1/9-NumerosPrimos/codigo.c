#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL, "");

    int num, divisor, cont = 0;

    printf("Digite um valor para saber se ele � primo: ");
    scanf("%d", &num);

    for(divisor = 1; divisor <= num; divisor++){
            if(num % divisor == 0){
                cont++;
            }
    }
    if(cont == 2){
        printf("O n�mero %d � primo!", num);
    }else{
        printf("O n�mero %d n�o � primo, pois ele tem mais de 2 divisores (%d).", num, cont);
    }

    printf("\n");
    printf("\n");

    system("pause");
}
