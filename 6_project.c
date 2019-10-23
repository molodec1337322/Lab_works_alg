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
	for (int i = 0; i < size; i++) arr[i] = rand() % 100;
}

int* gnomeSort(int* arr, int size)
{
	int i = 1;
	int j = 2;
	int temp;
	while (i < size)
	{
		if (arr[i - 1] > arr[i]) i = j++; // < для сортировки по возрастанию
		else
		{
			temp = arr[i - 1];
			arr[i - 1] = arr[i];
			arr[i] = temp;
			i--;
			if (i == 0)
			{
				i = j++;
			}
		}
		return arr;
	}
}

int main()
{
	int* arr = malloc(sizeof(int) * 30);
	fillArr(arr, 30);
	showArr(arr, 30);
	arr = gnomeSort(arr, 30);
	showArr(arr, 30);
	return 0;
}
