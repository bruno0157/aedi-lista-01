#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float celsius = 0, fahrenheit = 0;

    printf("Informe uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = ((9.0/5.0)*celsius)+(32);

    printf("\nA temperatura informada em graus Fahrenheit é: %.1f°F\n", fahrenheit);

    return 0;
}
