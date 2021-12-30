
#include<stdio.h>
int main()
{
int variable1,variable2;

printf("enter first variable");
scanf("%d",&variable1);
printf("enter second variable");
scanf("%d",&variable2);


variable1 = variable1 + variable2;
variable2 = variable1 - variable2;
variable1 = variable1 - variable2;

printf("swapped variable1 is %d and swapped variable2 is %d \n",variable1,variable2);

return 0;
}
