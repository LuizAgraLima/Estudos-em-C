#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

void main () {

    setlocale(LC_ALL, "portuguese");

    int A;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    if (A <=10 && A>= 0 ) {
        printf("O número A está entre 0 e 10");
    }else {
        printf("O número A não está entre 0 e 10");
    }

    return 0;

}
