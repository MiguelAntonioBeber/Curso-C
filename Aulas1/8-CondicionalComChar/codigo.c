#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    // Definindo variaveis
    char letra = 'x';

    // Condicional simples
    if(letra == 'x'){
        printf("\nA letra é x.");
    }

    printf("\nCodigo da letra = %d", letra);

    if(letra == 120){
        printf("\nA letra é x.");
    }

    printf("\n");
    system("pause");
}
