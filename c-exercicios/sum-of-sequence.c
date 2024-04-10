#include <stdio.h>

int main(int argc, char *argv[])
{
  int firstValue;
  int lastValue;
  int sequenceLength;
  int sumOfSequence;

  printf("Type first value: \n");
  scanf("%d", &firstValue);
  printf("Type last value: \n");
  scanf("%d", &lastValue);
  printf("Type sequence length: \n");
  scanf("%d", &sequenceLength);

  sumOfSequence = (firstValue + lastValue) * sequenceLength / 2;
  printf("The sum of the arithmetic sequence is: %d\n",sumOfSequence );

  return 0;
}
