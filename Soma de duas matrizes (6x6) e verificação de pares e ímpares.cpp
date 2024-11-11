#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    int matriz1[6][6], matriz2[6][6], soma[6][6];

    printf("Digite os valores da primeira matriz (6x6):\n");
    for (int i = 0; i < 6; i++) 
	{
        for (int j = 0; j < 6; j++) 
		{
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz (6x6):\n");
    for (int i = 0; i < 6; i++) 
	{
        for (int j = 0; j < 6; j++) 
		{
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 6; i++) 
	{
        for (int j = 0; j < 6; j++) 
		{
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\nMatriz resultante da soma e paridade:\n");
    for (int i = 0; i < 6; i++) 
	{
        for (int j = 0; j < 6; j++) 
		{
            printf("%d (%s) ", soma[i][j], (soma[i][j] % 2 == 0) ? "Par" : "Ímpar");
        }
        printf("\n");
    }
}
