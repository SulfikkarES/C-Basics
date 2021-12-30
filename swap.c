#include<stdio.h>
int main()
{
    int value1,value2,swap;

    printf("Enter first value \n");
    scanf("%d",&value1);
printf("Enter second value \n");
scanf("%d",&value2);

swap=value1;
value1=value2;
value2=swap;

printf("swapped values of first is  %d and swapped values of first is %d \n",value1,value2);
    return(0);

}
