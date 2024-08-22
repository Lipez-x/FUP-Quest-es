#include <stdio.h>

int main()
{
    int linhas, colunas;

    scanf("%d", &linhas);
    scanf("%d", &colunas);

    int mtrz1[linhas][colunas], mtrz2[linhas][colunas], mtrz3[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &mtrz1[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &mtrz2[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mtrz3[i][j] = mtrz1[i][j] + mtrz2[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d\t", mtrz3[i][j]);
        }
        printf("\n");
    }
}