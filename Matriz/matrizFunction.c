#include <stdio.h>

int main () {

    void matrizFunction (int n, int m, int x[][m], int s[]);

    int matriz[2][2] = {{2, 1} ,{4, 3}};
    int vetorSoma [2];
    matrizFunction(2, 2, matriz, vetorSoma);

    for (int i = 0; i < 2; i++)
    {
        printf("%d \n", vetorSoma[i]);
    }
    

}

void matrizFunction (int n, int m, int matriz[][m], int vetorSoma[]) {

    int soma = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            soma += matriz[i][j];
        }

        vetorSoma [i] = soma;
        soma = 0;  
    }
    
}