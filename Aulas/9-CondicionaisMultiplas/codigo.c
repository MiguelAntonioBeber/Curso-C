#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    // Definindo variaveis
    int a = 10;

    // Conectivo l�gico AND. Se uma compara��o for VERDADEIRA, j� entra no bloco
    if(a > 5 && a < 15){
        printf("\nA vari�vel 'a' est� entre 5 e 15. ");
    }

    // Conectivo l�gico OU (OR)
    if(a > 5 || a > 15){
        printf("\nA vari�vel 'a' � maior que 5 ou 15. ");
    }

    // Misturando conectivos
    if( (a > 5 && a < 15) || a == 20 ){
        printf("\nA vari�vel 'a' est� entre 5 e 15 ou ela vale 20. ");
    }

    //Pula linhas
    printf("\n");

    // Pausa o programa
    system("pause");
}
