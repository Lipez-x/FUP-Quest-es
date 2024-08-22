#include <stdio.h>

int main()
{
    int limite, grito;
    scanf("%d", &limite);
    scanf("%d", &grito);

    int vetor[limite];

    for (int i = 0; i < limite; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < limite; i++)
    {
        if (vetor[i] == grito)
        {
            if (i == 0)
            {
                vetor[i + 1] *= -1;
            }
            else if (i == limite - 1)
            {
                vetor[i - 1] *= -1;
            }
            else
            {
                vetor[i - 1] *= -1;
                vetor[i + 1] *= -1;
            }
        }
    }

    for (int i = 0; i < limite; i++)
    {
        printf("%d ", vetor[i]);
    }
}