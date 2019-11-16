#include <stdio.h>

#define SIZE 6

int main()
{
	int arr[SIZE];
	int a;
	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &a);
		arr[i] = a;
	}
	int temp;
	for (int i = SIZE / 2; i > 0; i /= 2)
	{
		for (int j = i; j < SIZE; j++)
		{
			for (int k = j - i; k >= 0 && arr[k] > arr[k + i]; k--)
			{
				temp = arr[k + 1];
				arr[k + 1] = arr[k];
				arr[k] = temp;
			}
		}
	}
	for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);

	return 0;
}
