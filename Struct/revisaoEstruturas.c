#include <stdio.h>

struct Horarios
{
    int horas;
    int minutos;
    int segundos;
};

void recebeHorario (struct Horarios x[]);
void mostraHorario (struct Horarios x[]);

int main (void) {

    struct Horarios horario[5];
    recebeHorario (horario);
    mostraHorario (horario);

}

void recebeHorario (struct Horarios horario[]){

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o horário %d\n", i + 1);
        printf("Horas: ");
        scanf("%d", &horario[i].horas);
        printf("Minutos: ");
        scanf("%d", &horario[i].minutos);
        printf("Segundos: ");
        scanf("%d", &horario[i].segundos);
    }

}

void mostraHorario (struct Horarios horario[]){

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Horário %i: %i:%i:%i\n", i + 1, horario[i].horas, horario[i].minutos, horario[i].segundos);
    }
    
    
}