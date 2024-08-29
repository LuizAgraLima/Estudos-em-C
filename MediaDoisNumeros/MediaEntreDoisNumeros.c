#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale (LC_ALL, "portuguese");

    float a, b;

    //Define um valor para a variável a
    printf( "O valor de a é: ");
    scanf ("%f", &a);

    // Define um valor para a variável b
    printf("O valor de b é: ");
    scanf ("%f", &b);

    //Calcula a média entre os valores definidos e imprime o resultado, fixando em duas casas decimais o resultado
    printf ("A média entre %f e %f é: %0.2f ", a, b, (a+b)/2 );

    system ("pause");
}
