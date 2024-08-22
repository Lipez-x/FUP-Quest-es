#include <stdio.h>

int main()
{
    int l1, contador, nContido = 0;
    scanf("%d", &l1);

    int v1[l1];

    for (int i = 0; i < l1; i++)
    {
        scanf("%d", &v1[i]);
    }

    int l2;
    scanf("%d", &l2);

    int v2[l2];

    for (int i = 0; i < l2; i++)
    {
        scanf("%d", &v2[i]);
    }

    for (int i = 0; i < l1; i++)
    {
        contador = 0;
        for (int j = 0; j < l2; j++)
        {
            if (v1[i] == v2[j])
            {
                contador++;
            }
        }

        if (contador == 0)
        {
            nContido++;
        }
    }

    if (nContido)
    {
        printf("nao");
    }
    else
    {
        printf("sim");
    }
}