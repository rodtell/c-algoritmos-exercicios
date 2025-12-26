#include <stdio.h>

int Main()
{
  int year;
  int month;
  int day;
  
  printf("Input year:\n");
  scanf("%d", &year);
  printf("Input month:\n");
  scanf("%d", &month);
  printf("Input day:\n");
  scanf("%d", &day);

  printf("%d year, %d month, and %d day in hex is: 0x%x year, 0x%x month, 0x%x day\n",year, month, day, year, month, day);

  return 0;
}
