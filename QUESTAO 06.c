#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float tempo = 0, velocidade = 0, distancia = 0, litrosusados = 0;

    printf("Informe o tempo gasto na viagem em horas: ");
    scanf("%f", &tempo);
    printf("Informe a velocidade média durante a viagem em km/h: ");
    scanf("%f", &velocidade);

    distancia = tempo*velocidade;
    litrosusados = distancia/12;

    printf("\nQuantidade de litros gasta na viagem: %.1fL.", litrosusados);
    printf("\nDistância percorrida: %.1fkm.\n", distancia);

    return 0;
}
