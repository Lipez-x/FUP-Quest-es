#include <stdio.h>

int main()
{
    int limite, casais = 0;
    scanf("%d", &limite);
    int animais[limite];

    for (int i = 0; i < limite; i++)
    {
        scanf("%d", &animais[i]);
    }

    for (int i = 0; i < limite; i++)
    {

        for (int j = i + 1; j < limite; j++)
        {
            if ((animais[i] > 0 && animais[i] * -1 == animais[j]) || (animais[i] < 0 && animais[i] * -1 == animais[j]))
            {
                casais++;
                animais[i] = 0;
                animais[j] = 0;
            }
        }
    }

    for (int i = 0; i < limite; i++)
    {
        printf("%d ", animais[i]);
    }

    printf("\n%d", casais);
}