#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale (LC_ALL, "portuguese");

    float a, b;

    //Define um valor para a vari�vel a
    printf( "O valor de a �: ");
    scanf ("%f", &a);

    // Define um valor para a vari�vel b
    printf("O valor de b �: ");
    scanf ("%f", &b);

    //Calcula a m�dia entre os valores definidos e imprime o resultado, fixando em duas casas decimais o resultado
    printf ("A m�dia entre %f e %f �: %0.2f ", a, b, (a+b)/2 );

    system ("pause");
}
