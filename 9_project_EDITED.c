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
	for (int i = 0; i < SIZE;)
	{
		if (i == 0 || arr[i] > arr[i - 1]) i++;
		else 
		{
			temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
			i--;
		}
	}

	for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);

	return 0;
}
