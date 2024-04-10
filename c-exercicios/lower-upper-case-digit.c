#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char character;

    printf("Input charcater: \n");
    scanf("%c", &character);
    if (islower(character)) {
	printf("lower case letter\n");
    } else if (isupper(character)) {
	printf("upper case letter\n");
    } else if (isdigit(character)) {
	printf("character is a digit\n");
    } else {
	printf("character not identified\n");
    }

    return 0;
}
