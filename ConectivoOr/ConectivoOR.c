#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale (LC_ALL, "portuguese");

    int A, B;

    printf("Diga o valor de A: ");
    scanf("%d", &A);
    printf("Diga o valor de B: ");
    scanf("%d", &B);

    if (A  > 10 || B > 10) {
        printf("Pelo menos um dos números é maior que 10");
    } else {
        printf("Os dois números são menores que 10");
    }

    return 0;
}
