#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");

    float a = 9.7;
    printf("%.2f\n", a);
    scanf("%f", &a);
    printf("O novo valor de a é: %f", a);
}
