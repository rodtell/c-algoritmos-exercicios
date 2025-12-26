#include <stdio.h>

int Main()
{
  int first_term;
  int n_term;
  int difference_between_terms;
  int length_sequence;

  printf("Type the first term of the sequence: \n");
  scanf("%d", &first_term);
  printf("Type the difference between the terms of the sequence: \n");
  scanf("%d", &difference_between_terms);
  printf("Type the length of the sequence: \n");
  scanf("%d", &length_sequence);

  n_term = first_term + (length_sequence - 1) * difference_between_terms;
  printf("The n-th term of the sequence is: %d\n", n_term);
    
  return 0;
}
