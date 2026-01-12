#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int absolute;

    printf("Input number\n");
    scanf("%d", &number);

    absolute = abs(number);
    printf("The absolute value of %d is %d\n",number, absolute);

    return 0;
}
