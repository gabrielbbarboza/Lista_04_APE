#include <stdio.h>

int potencia(int base, int expoente)
{
    int resultado = 1;

    for (int i = 1; i <= expoente; i++)
    {
        resultado *= base;
    }

    return resultado;
}

int main()
{
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente (maior ou igual a 1): ");
    scanf("%d", &expoente);

    printf("%d elevado a %d e: %d\n", base, expoente, potencia(base, expoente));

    return 0;
}
