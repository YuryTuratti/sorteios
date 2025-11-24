#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char nome[20][20]; // vetor que add os nomes
    int usados[20] = {0};
    int quantidade, times, i, x;

    printf("quantos times : \n");
    scanf("%d", &times);

    printf("ira add quantos pessoas : \n ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++)
    {
        printf(" pessoa %d : \n ", i + 1);
        scanf("%s", nome[i]);
    }

    for (i = 0; i < quantidade; i++)
    {
        do
        {
            srand(time(NULL));
            x = rand() % quantidade;
        } while (usados[x] == 1);

        usados[x] = 1;
        printf("time 1 |  - %s \n", nome[x]);
    }

    return 0;
}