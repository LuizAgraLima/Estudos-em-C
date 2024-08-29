#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int A = 0;
    int B = 0;

    while (!(A>= 5 && A<= 10) || !(B>= 5 && B<= 10)){

        printf("Digite valores entre 5 e 10: \n");

        printf("Digite o valor de A:  ");
        scanf("%d", &A);

        printf("Digite o valor de B:  ");
        scanf("%d", &B);

        }

    int soma = A + B;
    printf("%d", soma);

}
