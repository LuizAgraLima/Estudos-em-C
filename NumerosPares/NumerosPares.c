#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "portuguese");

    int A, B, restoA, restoB;

    printf("Diga qual o valor de A:");
    scanf("%d", &A);

    printf("Diga qual o valor de B:");
    scanf("%d", &B);

    restoA = A % 2;

    restoB = B % 2;

    if (restoA == 0 || restoB == 0) {
        printf("Pelo menos um dos números é par");
    } else {
        printf("Nenhum dos número é par");
    }

    return 0;

}
