#include <stdio.h>

int main()
{
    int limite, pontosP1 = 0, pontosP2 = 0;
    scanf("%d", &limite);

    float produtos[limite], chutesP1[limite];
    char escolhasP2[limite];
    for (int i = 0; i < limite; i++)
    {
        scanf("%f", &produtos[i]);
    }

    for (int i = 0; i < limite; i++)
    {
        scanf("%f", &chutesP1[i]);
    }

    for (int i = 0; i < limite; i++)
    {
        scanf(" %c", &escolhasP2[i]);
    }

    for (int i = 0; i < limite; i++)
    {
        if (chutesP1[i] == produtos[i])
        {
            pontosP1++;
        }
        else if (chutesP1[i] > produtos[i] && escolhasP2[i] == 'M')
        {
            pontosP1++;
        }
        else if (chutesP1[i] < produtos[i] && escolhasP2[i] == 'm')
        {
            pontosP1++;
        }
        else
        {
            pontosP2++;
        }
    }

    if (pontosP1 > pontosP2)
    {
        printf("primeiro");
    }
    else if (pontosP2 > pontosP1)
    {
        printf("segundo");
    }
    else
    {
        printf("empate");
    }
}