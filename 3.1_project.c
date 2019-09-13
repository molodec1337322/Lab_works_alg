#include <stdio.h>
#include <math.h>

int main()
{
	int matrix[5][4];
	int num;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf_s("%d", &num);
			matrix[i][j] = num;
		}
	}

	int multiply;
	scanf_s("%d", &multiply);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matrix[i][j] *= multiply;
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
