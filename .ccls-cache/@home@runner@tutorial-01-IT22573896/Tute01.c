/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, total;
  float average;

  printf("Enter values for num1 and num2 : ");
  scanf("%d %d", &mark1, &mark2);

  total = mark1 + mark2;

  average = total / 2;

  printf("Average : %.2f", average);

  return 0;
}
