#include <stdio.h>

// Função para retornar o menor entre dois números inteiros
int menor(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2, resultado;

    // Lê dois números inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Chama a função para encontrar o menor número
    resultado = menor(num1, num2);

    // Imprime o menor número
    printf("O menor numero e: %d\n", resultado);

    return 0;
}
