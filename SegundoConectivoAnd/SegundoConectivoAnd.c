#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

void main () {

    setlocale(LC_ALL, "Portuguese");

    int A, B, C;

    printf("Diga um valor para A: ");
    scanf("%d", &A);

    printf("Diga um valor para B: ");
    scanf("%d", &B);

    printf("Diga um valor para C: ");
    scanf("%d", &C);

    if(A && B && C > 10) {
        printf("Os n�meros fornecidos s�o maiores que 10");
    }else{printf("Pelo menos um dos n�meros fornecidos s�o menores que 10");
    }

}
