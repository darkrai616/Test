#include <stdio.h>

int func(x) {
	return x;
}

int main()
{
	printf("Hello, world!\n");

	printf("%d\n", func(6));

	printf("Wrote a GUI.\n");

	return 0;
}
