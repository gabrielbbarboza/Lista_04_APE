#include <stdio.h>

int Absoluto(int num)
{
    if (num < 0)
    {
        return -num;
    }
    else
    {
        return num;
    }
}

int main()
{
    int valores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nValores absolutos:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Valor absoluto de %d e: %d\n", valores[i], Absoluto(valores[i]));
    }

    return 0;
}
