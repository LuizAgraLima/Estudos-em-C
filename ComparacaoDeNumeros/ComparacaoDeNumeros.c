#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale (LC_ALL, "Portuguese");

    int a, b;

    printf( "Defina o valor de a: ");
    scanf ("%d", &a);

    printf("Defina o valor de b: ");
    scanf("%d", &b);

    if (a>b){
        printf("a � maior que b");
    } else if (b>a) {
        printf("b � menor que a");
    } else{
        printf("a e b s�o iguais");
    }

    return 0;
}
