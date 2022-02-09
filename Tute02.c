/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  float distance = 0 , total_pay = 0; 

  printf("Enter the travelled distance :");  // get input from user 
  scanf("%f" , &distance);

  if( distance > 30)
  {
    total_pay = 30 * 50 + (distance - 30) * 40; // calculate the total payment
  }
  else if( distance <= 30)
  {
    total_pay = 30 * 50 ;
  }
  else
  {
    printf("Error !");
  }

  printf("Your total payment : %.2f\n" , total_pay);  // print the total payment
  return 0;
}
