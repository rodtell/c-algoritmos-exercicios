#include <stdio.h>

int main(int argc, char *argv[])
{
	char digit;

	printf("Input digit: \n");
	scanf("%x", &digit);
	printf("%x in binary is: %b\n", digit, digit);

	return 0;
}
