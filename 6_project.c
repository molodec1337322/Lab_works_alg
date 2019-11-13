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
	for (int i = 1; i < SIZE; i++)
	{
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) 
		{
			temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
		}
	}
	for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
	
	return 0;
}
