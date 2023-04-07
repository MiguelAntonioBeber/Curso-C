#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    // Definindo variaveis
    int a = 10;

    // Conectivo lógico AND. Se uma comparação for VERDADEIRA, já entra no bloco
    if(a > 5 && a < 15){
        printf("\nA variável 'a' está entre 5 e 15. ");
    }

    // Conectivo lógico OU (OR)
    if(a > 5 || a > 15){
        printf("\nA variável 'a' é maior que 5 ou 15. ");
    }

    // Misturando conectivos
    if( (a > 5 && a < 15) || a == 20 ){
        printf("\nA variável 'a' está entre 5 e 15 ou ela vale 20. ");
    }

    //Pula linhas
    printf("\n");

    // Pausa o programa
    system("pause");
}
