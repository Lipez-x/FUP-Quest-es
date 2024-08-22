#include <stdio.h>

int main()
{
    int limite;
    scanf("%d", &limite);

    int vetor[limite];
    for (int i = 0; i < limite; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < limite; i++)
    {
        int storage;

        for (int j = i + 1; j < limite; j++)
        {
            if (vetor[i] > vetor[j])
            {
                storage = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = storage;
            }
        }
    }

    for (int i = 0; i < limite; i++)
    {
        if (i == limite - 1)
        {
            printf("%d", &vetor[i]);
        }
        else
        {
            printf("%d ", vetor[i]);
        }
    }
}