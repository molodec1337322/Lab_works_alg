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
	int temp, k;
	int size = SIZE;
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

	for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
	
	return 0;
}
