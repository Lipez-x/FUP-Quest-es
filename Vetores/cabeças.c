#include <stdio.h>

int main()
{

    int limite, espada;
    scanf("%d %d", &limite, &espada);

    int jogador[limite];

    for (int i = 0; i < limite; i++)
    {
        jogador[i] = 1;
    }

    espada = espada % limite;

    for (int i = 1; i < limite; i++)
    {
        jogador[espada] = 0;
        while (jogador[espada] == 0)
        {
            espada = (espada + 1) % limite;
        }

        espada = (espada + 1) % limite;
        while (jogador[espada] == 0)
        {
            espada = (espada + 1) % limite;
        }
    }

    for (int i = 0; i < limite; i++)
    {
        if (jogador[i] != 0)
        {
            printf("%d", i + 1);
        }
    }
}