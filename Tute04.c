/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum( int x , int y );             // call the function
int maximum( int x , int y );
int multiply( int x , int y);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");   //get no1 from user
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");   //get no2 from user
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));      //print the minimum number
   printf("%d ", maximum(no1, no2));      //print the maximum number
   printf("%d ", multiply(no1, no2));     //print the multiplicaton
   return 0;
}

int minimum( int x , int y )//find the minimum number between no1 & no2
{
  int minimum = 0 ;
  if( x < y )
  {
    minimum = x ;
  }
  else if( y < x )
  {
    minimum = y;
  }
  else
  {
    minimum = 0 ;
  }
  return minimum;
}

int maximum( int x , int y )//find the maximum number between no1 & no2
{
  int maximum = 0 ;
  if( x > y )
  {
    maximum = x ;
  }
  else if( y > x )
  {
    maximum = y;
  }
  else
  {
    maximum = 0 ;
  }
  return maximum;
}

int multiply( int x , int y)//multiplication
{
  return x*y;
}