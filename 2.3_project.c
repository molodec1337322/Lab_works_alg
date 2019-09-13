#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	scanf_s("%d", &num);

	for (int i = num - 1; i > 1; i--)
	{
		num *= i;
	}

	printf("factorial is %d", num);

	return 0;
}
