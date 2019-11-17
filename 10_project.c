#include <stdio.h>

#define SIZE 5

void quickSort(int* arr, int begin, int end)
{
	if (begin < end)
	{
		int i = begin;
		int j = end;
		int mid = arr[(begin + end) / 2];
		int temp;

		do
		{
			while (arr[i] < mid) i++;
			while (arr[j] > mid) j--;

			if (i <= j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				i++;
				j--;
			}
		} while (i <= j);

		quickSort(arr, begin, j);
		quickSort(arr, i, end);
	}
}

int main()
{
	int arr[SIZE];
	int a;
	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &a);
		arr[i] = a;
	}

	quickSort(arr, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);

	return 0;
}
