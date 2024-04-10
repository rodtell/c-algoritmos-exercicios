#include <stdio.h>

int main(int argc, char *argv[])
{
  int firstTerm;
  int nTerm;
  int differenceBetweenTerms;
  int lengthSequence;

  printf("Type the first term of the sequence: \n");
  scanf("%d", &firstTerm);
  printf("Type the difference between the terms of the sequence: \n");
  scanf("%d", &differenceBetweenTerms);
  printf("Type the length of the sequence: \n");
  scanf("%d", &lengthSequence);

  nTerm = firstTerm + (lengthSequence - 1) * differenceBetweenTerms;
  printf("The n-th term of the sequence is: %d\n",nTerm );
    
  return 0;
}
