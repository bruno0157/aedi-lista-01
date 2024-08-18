#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1 = 0, n2 = 0, dobro = 0, soma =0, raiz = 0;

    printf("Insira o primeiro número real: ");
    scanf("%f", &n1);
    printf("Insira o segundo número real: ");
    scanf("%f", &n2);

    dobro = n1*2.0;
    soma = (n1*3.0)+(n2/2.0);
    raiz = sqrt(n1+n2);

    printf("\nDobro do primeiro número: %.1f\n", dobro);
    printf("Soma do triplo do primeiro número com a metade do segundo: %.1f\n", soma);
    printf("Raiz quadrada da soma do primeiro número com o segundo: %.1f\n", raiz);

    return 0;
}
