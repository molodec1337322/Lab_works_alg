#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	float D, x1, x2;
	scanf_s("%f %f %f", &a, &b, &c);
	D = sqrt((b * b) - (4 * a * c));
	if (D < 0) {
		printf("No answers");
		return 0;
	}
	x1 = (-c + D) / (2 * a);
	x2 = (-c - D) / (2 * a);
	printf("f%", x1);
	printf("f%", x2);
	return 0;
}
