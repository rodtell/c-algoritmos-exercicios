#include <stdio.h>

int main() {
    int grade_one;
    int grade_two;
    int grade_three;
    double average;

    printf("Type in grade one: \n");
    scanf("%d", &grade_one);
    printf("Type in grade two: \n");
    scanf("%d", &grade_two);
    printf("Type in grade three: \n");
    scanf("%d", &grade_three);
    average = ((double)grade_one + grade_two + grade_three) / 3;
    printf("Average of the 3 grades: %.1f\n", average);

    return 0;
}
