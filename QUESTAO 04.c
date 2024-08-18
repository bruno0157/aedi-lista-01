#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float quantidade = 0, excedente = 0;

    printf("Informe a quantidade de kg de peixe pescado: ");
    scanf("%f", &quantidade);

    if (quantidade > 50) {
        excedente = quantidade - 50;
        printf("\nA quantidade excede o limite de coleta por: %.1fkg.", excedente);
        printf("\nDeverá ser paga uma multa de R$4,00.\n");
    }
    else {
        printf("\nNenhuma multa a ser paga.\n");
    }

    return 0;
}
