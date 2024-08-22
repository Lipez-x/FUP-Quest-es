#include <stdio.h>

int main()
{
    int limite, parkour = 0;
    scanf("%d", &limite);

    int vetor[limite];

    for (int i = 0; i < limite; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < limite - 1; i++)
    {
        int dif = vetor[i] - vetor[i + 1];

        if (dif > 1 || dif < -1)
        {
            parkour++;
        }
    }

    printf("%d", parkour);
}