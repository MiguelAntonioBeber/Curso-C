#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    // Permite usar acentos
    setlocale(LC_ALL, "");

    // Definindo variaveis
    int a, b, c;

    // Lendo valores usando scanf
    printf("Digite tr�s valores separados por espa�os: ");
    scanf("%d %d %d", &a, &b, &c);

    // Imprimindo resultado
    if(a == b && a == c){
        printf("\nEquilatero");
    }else if(a == b || a == c || c == b){
        printf("\nTriangulo is�sceles.");
    }else {
        printf("\nTriangulo escaleno.");
    }
}
