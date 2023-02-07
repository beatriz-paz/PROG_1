#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char valores[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'};
    char naipe[4] = {'e', 'c', 'o', 'p'};
    int retirada[13][4] = {0};

    int v, n, num_cartas;

    srand(time(NULL));

    printf("Entre com o número de cartas: ");
    scanf("%d", &num_cartas);

    if (num_cartas <= 0 || num_cartas > 52) {
        printf("Número de cartas invalido\n");
        return 1; //encerra o programa nesse momento
    }

    while (num_cartas > 0) {
        v = rand() % 13;
        n = rand() % 4;
        if (retirada[v][n] == 0) {
            retirada[v][n] = 1;
            printf("%c%c ", valores[v], naipe[n]);
            num_cartas--;
        }
    }
    printf("\n");

    return 0;
}