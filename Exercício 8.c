#include <stdio.h>

int VerificaValor(int numero)
{
    if (numero > 0)
    {
        return 1;
    }
    else if (numero < 0)
    {
        return -1;
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

    int resultado = VerificaValor(valor);

    if (resultado == 1)
    {
        printf("O valor %d e positivo.\n", valor);
    }
    else if (resultado == -1)
    {
        printf("O valor %d e negativo.\n", valor);
    }
    else
    {
        printf("O valor e zero.\n");
    }

    return 0;
}
