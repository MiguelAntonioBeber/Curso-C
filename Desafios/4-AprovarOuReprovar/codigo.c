#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    // Permite usar acentos.
    setlocale(LC_ALL, "");


    // Crie um algorite que leia 3 notas e calcule a m�dia entre elas.
    // Se o valor for maio que 7 infdorme que o aluno foi aprovado,
    // Sen�o reprovado.

    float nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);


    float resultado = (nota1 + nota2 + nota3) / 3;

    printf("\n");

    if(resultado >= 7){
        printf("Voc� foi aprovado, parab�ns! Sua nota foi %f", resultado);
    }else if(resultado < 7){
        printf("Voc� infelizmente foi reprovado, sua nota foi %f", resultado);
    }

    printf("\n");

    system("pause");

}
