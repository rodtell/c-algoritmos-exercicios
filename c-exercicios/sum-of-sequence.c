#include <stdio.h>

int Main()
{
  int first_value;
  int last_value;
  int sequence_length;
  int sum_of_sequence;

  printf("Type first value: \n");
  scanf("%d", &first_value);
  printf("Type last value: \n");
  scanf("%d", &last_value);
  printf("Type sequence length: \n");
  scanf("%d", &sequence_length);

  sum_of_sequence = (first_value + last_value) * sequence_length / 2;
  printf("The sum of the arithmetic sequence is: %d\n",sum_of_sequence);

  return 0;
}
