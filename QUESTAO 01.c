#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int lado = 0, area = 0;

    printf("Informe a medida do lado do quadrado: ");
    scanf("%d", &lado);

    area = lado*lado;

    printf("\nO dobro da �rea do quadrado � %d.\n", area*2);

    return 0;
}
