#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale (LC_ALL, "Portuguese");

    int a, b, soma;

    printf("Defina um valor entre 0 e 9 para a: ");
    scanf("%d", &a);

    printf("Defina um valor entre 0 e 9 para b: ");
    scanf("%d", &b);

    soma = a + b;

    if (soma>=10) {
        printf("A soma entre a e b é maior que 10");
    }else {
        printf("A soma entre a e b é menor que 10");
    }

    return 0;

}
