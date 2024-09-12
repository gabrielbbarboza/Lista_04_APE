#include <stdio.h>

float CalcularMedia(float n1, float n2, float n3, char tipo)
{
    float media;

    switch (tipo)
    {
    case 'A':
        media = (n1 + n2 + n3) / 3;
        break;
    case 'P':
        media = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
        break;
    case 'H':
        media = 3 / ((1 / n1) + (1 / n2) + (1 / n3));
        break;
    default:
        printf("Opcao invalida!\n");
        return -1;
    }
    return media;
}

int main()
{
    float nota1, nota2, nota3, resultado;
    char opcao;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite 'A' para media aritmetica, 'P' para media ponderada ou 'H' para media harmonica: ");
    scanf(" %c", &opcao);

    resultado = CalcularMedia(nota1, nota2, nota3, opcao);

    if (resultado != -1)
    {
        printf("A media calculada e: %.2f\n", resultado);
    }

    return 0;
}
