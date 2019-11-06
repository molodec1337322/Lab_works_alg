#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

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
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
	
	return 0;
}
