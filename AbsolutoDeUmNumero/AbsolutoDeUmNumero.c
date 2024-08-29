#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale (LC_ALL, "portuguese");

    //Cria duas variáveis
    int nota1, nota2, resultado;

    //Define o valor da variável nota1
    printf ("A primeira nota do aluno foi: ");
    scanf ("%d", &nota1);

    //Define o valor da variavel nota2
    printf( "A segunda nota do aluno foi: ");
    scanf ("%d", &nota2);

    //Calcula o valor da operação solicitada e armaneza a resposta na variável resultado
    resultado = nota1 - nota2;

    //Imprime o absoluto do valor do resultado
    printf("O valor absoluto da diferença entre a primeira e segunda nota é: %d \n", abs(resultado) );

    system ("pause");

}
