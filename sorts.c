#include <stdio.h>

int main()
{
	int arr[5] = { 1, 7, 5, 3, 9 };
	int N = sizeof(arr) / sizeof(int);
	int i, j, temp;

	/*

	Сортировка пузырьком

	int flag = 0;
	for (int i = 0; i < N - 1; i++)
	{
		flag = 0;
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 1;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if(!flag) break;
	}
	*/

	/*

	Сортировка расческой

	float k = 1.247;
	int step = N / k;
	while(step > 1)
	{
		for (int i = 0; i + step < N; i++)
		{
			if (arr[i] > arr[i + step])
			{
				temp = arr[i];
				arr[i] = arr[i + step];
				arr[i + step] = temp;
			}
		}
		step /= k;
	}
	*/


	/*

	Сортировка вставками

	for (i = 1; i < N; i++)
	{
		for (j = i, temp = arr[j]; j > 0 && arr[j - 1] > temp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}

	*/

	/*

	Сортировка шелла

	int step;
	for (step = N / 2; step > 0; step /= 2)
	{
		for (i = step; i < N; i++)
		{
			for (j = i, temp = arr[i]; j >= step; j -= step)
			{
				if (arr[j - step] > temp)
				{
					arr[j] = arr[j - step];
				}
				else break;
			}
			arr[j] = temp;
		}
	}
	*/


	/*

	Сортировка выбором

	int min;
	for (i = 0; i < N - 1; i++)
	{
		min = i;
		for (j = i + 1; j < N; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	*/



	for (int i = 0; i < N; i++)
	printf_s("%d ", arr[i]);
}
