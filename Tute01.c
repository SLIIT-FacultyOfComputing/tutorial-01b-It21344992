/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int m1,m2,sum;
  float avg;

  printf("Enter the Mark 01:");
  scanf("%d", &m1);
  puts("");

  printf("Enter the Mark 02:");
  scanf("%d", &m2);
  puts("");

  sum=m1+m2;
  avg=sum/2.0;

  printf("Sum is : %d\n", sum);
  printf("Average is : %.2f", avg);

  return 0;
}

