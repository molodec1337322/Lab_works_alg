#include <stdio.h>
#include <stdlib.h>

void showArr(int *arr, int size)
{
	printf("\n");
	for (int i = 0; i < size; i++) printf("%d ", arr[i]);
}

void fillArr(int* arr, int size)
{
	srand(0);
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

int* sort(int* arr, int size)
{
	int temp, k;
	int s = size - 1;
	while (size > 1)
	{
		s /= 1.247f;
		if (s < 1) s = 1;
		k = 0;
		for (int i = 0; i + s < size; i++)
		{
			if (arr[i] > arr[i + s])
			{
				temp = arr[i];
				arr[i] = arr[i + s];
				arr[i + s] = temp;
				k = i;
			}
		}
		if (s == 1) size = k + 1;
	}

	return arr;
}

int main()
{
	int* arr = malloc(sizeof(int) * 30);
	fillArr(arr, 30);
	showArr(arr, 30);
	arr = sort(arr, 30);
	showArr(arr, 30);
	return 0;
}
