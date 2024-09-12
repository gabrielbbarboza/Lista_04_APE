#include <stdio.h>

int VerificaPar(int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (VerificaPar(valor))
    {
        printf("O valor %d e par.\n", valor);
    }
    else
    {
        printf("O valor %d e impar.\n", valor);
    }

    return 0;
}
