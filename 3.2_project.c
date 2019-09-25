#include <stdio.h>


int main()
{
	char str[1000];
	int strn[256] = {0};
	int b;

	gets(str);
	puts(str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		b = (int)str[i];
		strn[b] += i;
	}

	char f;
	for (int i = 0; i < 256; i++)
	{
		if (strn[i] != 0)
		{
			f = (char)i;
			printf("%c = %d\n", f, strn[i]);
		}
	}

	return 0;
}
