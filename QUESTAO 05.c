#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float custofabrica = 0, valorfinal = 0;

    printf("Informe o custo de f�brica do carro: ");
    scanf("%f", &custofabrica);

    valorfinal = custofabrica + (0.28*custofabrica) + (0.45*custofabrica);

    printf("\nO valor final do carro � de: %.2f.\n", valorfinal);

    return 0;
}
