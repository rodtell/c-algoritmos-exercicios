#include <stdio.h>

int Main() {
    int number;

    printf("Input number of times to repeat asterisks: \n");
    scanf("%d", &number);

    while (number--) {
	printf("*\n");
    }

    return 0;
}
