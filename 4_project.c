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

int* bubbleSort(int* arr, int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	return arr;
}

int main()
{
	int* arr = malloc(sizeof(int) * 30);
	fillArr(arr, 30);
	showArr(arr, 30);
	arr = bubbleSort(arr, 30);
	showArr(arr, 30);
	return 0;
}
