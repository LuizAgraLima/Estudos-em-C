#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "portuguese");

    float A, B;
    int opcao;

    printf("Diga um valor para A: ");
    scanf("%f", &A);

    printf("Diga um valor para B: ");
    scanf("%f", &B);

    printf("\n \n");

    printf("----- calculadora ----- \n");
    printf("1 - soma \n");
    printf("2 - subtra��o \n");
    printf("Escolha uma op��o: \n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("%.2f", A+B);
            break;
        case 2:
            printf("%.2f", A-B);
            break;

        default:
            printf("Op��o inv�lida");
            break;
    }

    return 0;
}
