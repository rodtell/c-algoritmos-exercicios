#include <stdio.h>

int main(int argc, char *argv[])
{
    int gradeOne;
    int gradeTwo;
    int gradeThree;
    double average;

    printf("Type in grade one: \n");
    scanf("%d", &gradeOne);
    printf("Type in grade two: \n");
    scanf("%d", &gradeTwo);
    printf("Type in grade three: \n");
    scanf("%d", &gradeThree);
    average = ((double)gradeOne+gradeTwo+gradeThree)/3;
    printf("Average of the 3 grades: %.1f\n",average );

    return 0;
}
