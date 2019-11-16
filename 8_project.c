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
	int temp, min, minPos;
	for (int i = 0; i < SIZE; i++)
	{
		minPos = i;
		min = arr[minPos];
		for (int j = i + 1; j < SIZE; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				minPos = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minPos];
		arr[minPos] = temp;
	}
	for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);

	return 0;
}
