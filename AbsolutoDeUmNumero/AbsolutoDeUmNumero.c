#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale (LC_ALL, "portuguese");

    //Cria duas vari�veis
    int nota1, nota2, resultado;

    //Define o valor da vari�vel nota1
    printf ("A primeira nota do aluno foi: ");
    scanf ("%d", &nota1);

    //Define o valor da variavel nota2
    printf( "A segunda nota do aluno foi: ");
    scanf ("%d", &nota2);

    //Calcula o valor da opera��o solicitada e armaneza a resposta na vari�vel resultado
    resultado = nota1 - nota2;

    //Imprime o absoluto do valor do resultado
    printf("O valor absoluto da diferen�a entre a primeira e segunda nota �: %d \n", abs(resultado) );

    system ("pause");

}
