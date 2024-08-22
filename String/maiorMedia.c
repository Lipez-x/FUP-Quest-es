#include <stdio.h>
#include <string.h>

struct Alunos
{
    char nome[50];
    float notas[3];
};

float media(struct Alunos aluno[], int i);
void crescente(float medias[], int limite, struct Alunos aluno[]);

int main(void)
{

    int limite;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &limite);
    getchar();

    struct Alunos aluno[limite];
    float medias[limite];

    for (int i = 0; i < limite; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        for (int j = 0; j < 3; j++)
        {
            printf("Digite a nota do %dº bimestre do aluno %d: ", j + 1, i + 1);
            scanf("%f", &aluno[i].notas[j]);
            getchar();
        }

        medias[i] = media(aluno, i);
    }

    crescente(medias, limite, aluno);

    printf("Média dos aluno em ordem decrescente:\n");
    for (int i = 0; i < limite; i++)
    {
        printf("%s: %.1f\n", aluno[i].nome, medias[i]);
    }
}

float media(struct Alunos aluno[], int i)
{

    float somaTotal = 0;

    for (int j = 0; j < 3; j++)
    {
        somaTotal += aluno[i].notas[j];
    }

    float media = somaTotal / 3;

    return media;
}

void crescente(float medias[], int limite, struct Alunos aluno[])
{

    struct Alunos storage;
    int temp;

    for (int i = 0; i < limite; i++)
    {
        for (int j = i + 1; j < limite; j++)
        {
            if (medias[i] < medias[j])
            {
                temp = medias[i];
                medias[i] = medias[j];
                medias[j] = temp;

                storage = aluno[i];
                aluno[i] = aluno[j];
                aluno[j] = storage;
            }
        }
    }
}