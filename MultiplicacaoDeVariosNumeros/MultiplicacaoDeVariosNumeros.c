#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale (LC_ALL, "portuguese");

    // Define 3 variáveis de entrada e uma de saida
    int a, b, c, resultado;

    printf ("Os valores de a, b, e c são, respectivamente: ");
    scanf ("%d %d %d", &a, &b, &c);

    resultado = a*b*c;

    printf("O resultado da multiplicação entre esses três números é:%d \n",resultado);

    system ("pause");
}
