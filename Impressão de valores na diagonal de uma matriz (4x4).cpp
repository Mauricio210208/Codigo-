#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[4][4];

    printf("Digite os valores da matriz (4x4):\n");
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 4; j++) 
		{
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nValores na diagonal da matriz:\n");
    for (int i = 0; i < 4; i++) 
	{
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

}
