#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Imprime Ol�
    printf("Ol�");

    //Lendo valor inteiro
    int a = 50;
    printf("\nO valor de a � = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

    //Lendo valor quebrado
    float b = 5.5;
    printf("\nO valor de b � = %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f ", b);

    //Lendo letra
    char letra = 't';
    printf("\nO valor da letra � = %c \n", letra);
    // Limpa o lixo de Buffer
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor da letra mudou para %c", letra);
}
