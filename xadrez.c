#include <stdio.h>

int main()
{
    int i, numero;
    char peca;

    printf("Escolha o número da peça que vai movimentar \n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        while (i < 5)
        {
            printf("Direita , cima\n");
            i++;
        }
        break;
    case 2:
        while (i < 5)
            do
            {
                printf("Direita\n");
                i++;
            } while (i < 5);
        break;
    case 3:
        for (i = 0; i < 8; i++)
        {
            printf("%d direita\n");
        }
        break;
    default:
        break;
    }

    return 0;
}
