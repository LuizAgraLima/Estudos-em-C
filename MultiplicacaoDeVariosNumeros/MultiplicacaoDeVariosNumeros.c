#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale (LC_ALL, "portuguese");

    // Define 3 vari�veis de entrada e uma de saida
    int a, b, c, resultado;

    printf ("Os valores de a, b, e c s�o, respectivamente: ");
    scanf ("%d %d %d", &a, &b, &c);

    resultado = a*b*c;

    printf("O resultado da multiplica��o entre esses tr�s n�meros �:%d \n",resultado);

    system ("pause");
}
