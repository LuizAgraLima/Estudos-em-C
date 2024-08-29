#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 10;
    int j;

    printf("Diga o valor de j: ");
    scanf("%d", &j);

    while (i <= j) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i += 1;
    }


    return 0;
}

