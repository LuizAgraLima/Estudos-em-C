#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "portuguese");

    int A, resto;

    printf("Informe o valor de A:");
    scanf(" %d", &A);

    resto = A % 2;

    if(resto == 0){
        printf("O n�mero A � par");
    } else {
        printf("O n�mero A � �mpar");
    }

    return 0;

}
