#include <stdio.h>

int LerNumeroPositivo()
{
    int num;
    do
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        if (num <= 0)
        {
            printf("Numero invalido! Deve ser positivo.\n");
        }
    } while (num <= 0);
    return num;
}

int SomaDivisores(int num)
{
    int soma = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma += i;
        }
    }
    return soma;
}

int main()
{
    int num, soma;

    for (int i = 0; i < 5; i++)
    {
        num = LerNumeroPositivo();
        soma = SomaDivisores(num);
        printf("A soma dos divisores de %d (exceto ele mesmo) e: %d\n", num, soma);
    }

    return 0;
}
