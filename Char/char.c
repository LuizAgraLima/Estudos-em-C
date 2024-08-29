#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");

    char a = 'F';

    printf("%c\n", a);
    fflush(stdin);
    scanf("%c", &a);
    printf("A nova palavra é: %c \n", a);
}
