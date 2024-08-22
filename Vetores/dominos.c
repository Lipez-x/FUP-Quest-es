#include <stdio.h>

int main()
{
    int limite, crescente = 1;
    scanf("%d", &limite);

    int vetor[limite];
    for (int i = 0; i < limite; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < limite; i++)
    {
        for (int j = i + 1; j < limite; j++)
        {
            if (vetor[i] > vetor[j])
            {
                crescente = 0;
            }
        }
    }

    if (!crescente)
    {
        printf("precisa de ajuste");
    }
    else
    {
        printf("ok");
    }
}