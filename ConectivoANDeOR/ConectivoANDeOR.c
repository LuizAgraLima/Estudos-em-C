#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "portuguese");

    int A, B, soma, resto;

    printf("Diga um valor para A:");
    scanf("%d", &A);

    printf("Diga um valor para B:");
    scanf("%d", &B);

    soma = A + B;

    resto = soma % 2;

    if ((soma <= 10 && soma>= 0) || resto == 0) {
        printf("A soma dos n�meros est�o entre 0 e 10 ou � par");
    }else{
        printf("A soma dos n�meros n�o est�o entre 0 e 10 nem � par");
    }

}
