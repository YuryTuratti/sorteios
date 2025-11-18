#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char *nome[10] = {"yury", "pedro", "arthur", "gustavo", "jp", "kaua", "lucas", "arthur p", "mateus", "felipe"}; // vetor que add os nomes
    int usados[10] = {0};

    for (int i = 0; i <= 4; i++)
    {
        int x;

        do
        {
            srand(time(NULL));
            x = rand() % 10; // sorteia de 0 a 5

        } while (usados[x] == 1); // repete te ja tiver saido

        usados[x] = 1; // marcar como usado

        printf("time - 1 : %d - %s \n", x, nome[x]);
    }
    fflush(stdin);//pra que limpar buff do teclado se nao teve nenhuma entrada?

    for (int i = 0; i <= 4; i++)
    {
        int x;
        do
        {
            x = rand() % 10;

        } while (usados[x] == 1);

        usados[x] = 1;
        printf("time - 2 : %d - %s \n", x, nome[x]);
    }

    return 0;
}
