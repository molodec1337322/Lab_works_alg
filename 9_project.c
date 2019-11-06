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

void gnomeSort(int* arr, int size)
{
	int temp;
	for (int i = 0; i < size;)
	{
		if (arr[i] >= arr[i - 1] || i == 0) i++;
		else
		{
			temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
			i--;
		}
	}
}

int main()
{
	int arr[30];
	fillArr(arr, 30);
	showArr(arr, 30);
	gnomeSort(arr, 30);
	showArr(arr, 30);
	return 0;
}
