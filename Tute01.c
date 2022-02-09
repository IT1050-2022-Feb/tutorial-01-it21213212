/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float mark1 , mark2 , sum = 0, average = 0;

  printf("Enter the mark 1 :"); // get the input
  scanf("%f" , &mark1);

  printf("Enter the mark 2 :");  // get the input
  scanf("%f" , &mark2);

  sum = mark1 + mark2;  // calculation

  average = sum/2;  // calculation

  printf("Average is : %.2f\n" , average);  // print the average

  return 0;
}

