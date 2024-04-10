#include <stdio.h>

int main(int argc, char *argv[])
{
    int number;

    printf("Input number of times to repeat asterisks: \n");
    scanf("%d", &number);

    while (number--) {
	printf("*\n");
    }

    return 0;
}
