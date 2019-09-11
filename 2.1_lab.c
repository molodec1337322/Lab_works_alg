#include <stdio.h>

int main()
{
	float R, S;
	float Pi = 3.14;
	scanf_s("%f", &R, sizeof(float));
	S = Pi * R;
	printf("%f", S);
	return 0;
}
