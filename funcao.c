#include <stdio.h>
#include <string.h>

char gEnd [50] = "Programa finalizado."; //Variável global, pode ser usada em todas as funções

int main () {
     
     float areaQ(float x, float y);
     float somaArea(float z);
     float base, altura, area, soma;
     int limite;

     printf("Digite quantas áreas quer calcular: ");
     scanf("%d", &limite);

     for (int i = 0; i < limite; i++)
     {
     printf("Digite o tamanho da base em metros: ");
     scanf("%f", &base); 
     printf("Digite a altura: ");
     scanf("%f", &altura);

     area = areaQ(base, altura); 
     soma = somaArea(area);
     printf("A área é: %.2f \n \n", area);
     }

     printf("A soma das áreas é: %.2f \n", soma);
     puts(gEnd);
}

float areaQ(float base, float altura) {

     float area; //Variável local automática, é criada toda vez que a função é chamada, perde seu valor.
     area = base * altura;
     return area;
}

float somaArea (float area) {
      static float soma; //Variável local estática, é criada na primeira vez que a função é chamada, tem seu valor guardado.
      soma += area;
      return soma;
}