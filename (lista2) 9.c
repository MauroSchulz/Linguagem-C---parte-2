#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct 
{
    int hora;
    int minutos;
    int segundos;
}horario;

int main(){
    horario entrada;
    printf("Digite a hora, minutos e segundos separada por espacos: ");
    scanf("%d %d %d", &entrada.hora, &entrada.minutos, &entrada.segundos);

    printf("%d:%d:%d", entrada.hora, entrada.minutos, entrada.segundos);
}