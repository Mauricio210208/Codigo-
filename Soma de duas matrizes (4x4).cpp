#include <stdio.h>
#include <locale.h>

int main() 
{
	
    setlocale(LC_ALL, "Portuguese");
    int matriz1[4][4], matriz2[4][4], soma[4][4];

    printf("Digite os valores da primeira matriz (4x4):\n");
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 4; j++) 
		{
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz (4x4):\n");
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 4; j++) 
		{
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
	{
        for (int j = 0; j < 4; j++) 
		{
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\nMatriz resultante da soma:\n");
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 4; j++) 
		{
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
}
