#include <stdio.h>

int main() {
    int number;

    printf("Input number\n");
    scanf("%d", &number);

    if (number > 99 && number <= 999) {
	printf("Triple digit number\n");
    } else if (number <= 99 && number >= 10) {
	printf("Double digit number\n");
    } else {
	printf("Neither double or triple\n");
    }

    return 0;
}
