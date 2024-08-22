#include <stdio.h>

int main()
{
    int totalAlbum, totalBaruel, iguais, contIguais = 0, presente, falta = 0;
    scanf("%d %d", &totalAlbum, &totalBaruel);

    int figurinhas[totalBaruel];
    for (int i = 0; i < totalBaruel; i++)
    {
        scanf("%d", &figurinhas[i]);
    }

    for (int i = 0; i < totalBaruel; i++)
    {
        iguais = 0;
        for (int j = i + 1; j < totalBaruel; j++)
        {
            if (figurinhas[i] == figurinhas[j])
            {
                iguais++;
            }
        }

        if (iguais > 0)
        {
            printf("%d ", figurinhas[i]);
            contIguais++;
        }
    }

    if (!contIguais)
    {
        printf("N");
    }

    printf("\n");

    for (int i = 1; i <= totalAlbum; i++)
    {
        presente = 0;
        for (int j = 0; j < totalBaruel; j++)
        {
            if (i == figurinhas[j])
            {
                presente++;
            }
        }
        if (presente == 0)
        {
            printf("%d ", i);
            falta++;
        }
    }

    if (!falta)
    {
        printf("N");
    }
}