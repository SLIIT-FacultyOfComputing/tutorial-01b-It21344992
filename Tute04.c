/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum();
int maximum();
int multiply();
int main() {

   int no1, no2;

   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);

   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   printf("%d \n", minimum(no1, no2));
   printf("%d \n", maximum(no1, no2));
   printf("%d \n", multiply(no1, no2));

   return 0;
}
int minimum(No1,No2)
{
  int min;
  if(No1<No2){
      min=No1;
  }
  else if(No1>No2){
      min=No2;
  }
return min;
}
int maximum(No1,No2)
{
  int max;
  if(No1<No2){
      max=No2;
  }
  else if(No1>No2){
      max=No1;
  }
  return max;
}
 int multiply(No1,No2)
{
   int N;
   N=No1*No2;

   return N;
}