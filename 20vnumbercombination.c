#include<stdio.h>

int main()
{
int totoalrowno,i,j,k;
printf("enter number of row");
scanf("%d",&totoalrowno);

for(i=1;i<=totoalrowno;i++)
{
    printf("\n");
for(j=1;j<=(totoalrowno-i);j++) //space calculation row-rownumber
{
printf(" ");
}
for(k=1;k<=((2*i)-1);k++) //odd number of stars
   {
 printf("%d",i);
   }
printf("\n");
}
return 0;
}















