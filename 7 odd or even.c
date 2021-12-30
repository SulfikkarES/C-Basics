#include<stdio.h>
int main()
{
int number;

printf("enter a number:  \n");
scanf("%d",&number);

if(number%2==0)
{
printf("it is even number");
}
else
{
printf("it is a odd number");
}
return 0;
}
