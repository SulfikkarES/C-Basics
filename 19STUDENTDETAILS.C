#include<stdio.h>
int main()
{


float mark1,mark2, mark3, mark4, mark5, percentage;

printf("enter first subjuct mark  :");
scanf("%f",&mark1);

printf("enter second subjuct mark  :");
scanf("%f",&mark2);

printf("enter third subjuct mark  :");
scanf("%f",&mark3);

printf("enter fourth subjuct mark  :");
scanf("%f",&mark4);

printf("enter fifth subjuct mark  :");
scanf("%f",&mark5);


 percentage = (mark1 + mark2 + mark3 + mark4 + mark5)/500*100;

if (percentage >= 60)
{
    printf("%f percentage is First Division\n",percentage);   }

else if(percentage >= 50 && percentage <= 59)
{
    printf("%f percentage is Second Division\n",percentage);  }

else if(percentage >= 40 && percentage <= 49)
{
    printf("%f percentage is Third Division\n",percentage);   }

else
{
    printf("Fail\n"); }


 return 0;
 }
