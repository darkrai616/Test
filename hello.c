#include <stdio.h>

int func(x) {
	return x;
}

int main()
{
	printf("Hello, world!\n");

	printf("%d\n", func(5));

	return 0;
}
