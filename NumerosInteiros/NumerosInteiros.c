#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");
    int a = 50;
    int b = 60;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", a + b);
    printf("O valor da soma de a e b é: %d \n", a+b);

}
