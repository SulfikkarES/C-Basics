#include<stdio.h>
int main()
{
int firstangle,secondangle,thirdangle,sum;


printf("Enter first angle of triangle:");
scanf("%d",&firstangle);

printf("Enter second angle of triangle:");
scanf("%d",&secondangle);

printf("Enter third angle of triangle:");
scanf("%d",&thirdangle);


sum = firstangle + secondangle + thirdangle;

printf("total sum is %d\n",sum);

if(sum == 180)
{
printf("total angle %d is a Valid triangle",sum);
}

else
{
printf("toatl angle %d is a invalide triangle",sum);
}

return 0;
}


