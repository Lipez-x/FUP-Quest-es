#include <stdio.h>
#include <limits.h>

int main()
{
    int dist, nJogadores, dif, maior = INT_MIN, menor = INT_MAX, vencedor = -1, perdedor = -1;
    scanf("%d %d", &dist, &nJogadores);

    int jogadas[nJogadores], difs[nJogadores];

    for (int i = 0; i < nJogadores; i++)
    {
        scanf("%d", &jogadas[i]);
    }

    for (int i = 0; i < nJogadores; i++)
    {
        if (jogadas[i] < 0)
        {
            jogadas[i] *= -1;
        }

        dif = dist - jogadas[i];
        difs[i] = dif;
    }

    for (int i = 0; i < nJogadores; i++)
    {
        if (difs[i] > 0 && jogadas[i] < menor)
        {
            menor = jogadas[i];
            vencedor = i;
        }
        if (difs[i] < 0)
        {
            perdedor = i;
        }
    }

    if (perdedor == -1)
    {
        for (int i = 0; i < nJogadores; i++)
        {
            if (jogadas[i] > maior)
            {
                maior = jogadas[i];
                perdedor = i;
            }
        }
    }

    if (vencedor == -1)
    {
        printf("nenhum\n");
    }
    else
    {
        printf("%d\n", vencedor);
    }

    printf("%d", perdedor);
}