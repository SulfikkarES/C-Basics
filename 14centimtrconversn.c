#include<stdio.h>
int main()
{

float feet,inch,totalinch,centimeters;

printf("Enter feet :");
scanf("%f",&feet);

printf("enter inches :");
scanf("%f",&inch);

totalinch = (12 * feet) + inch; // 1 feet = 12 inch

centimeters = totalinch * 2.54;  // 1 inch 2.54 cms

printf("%f IS Total Inchs\n",totalinch);
printf("%f IS Total Centimeters\n",centimeters);
}









