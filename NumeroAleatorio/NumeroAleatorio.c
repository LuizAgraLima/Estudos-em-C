#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main () {

    setlocale(LC_ALL, "portuguese");

    srand(time(NULL));

    int numero_aleatorio = rand();

    printf("Número aleatório: %d\n", numero_aleatorio);

    return 0;

}
