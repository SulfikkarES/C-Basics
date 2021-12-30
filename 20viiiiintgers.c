#include<stdio.h>

int main()
{
int totoalrowno,i,j,k,m;
printf("enter number of row");
scanf("%d",&totoalrowno);

for(i=1;i<=totoalrowno;i++)
{
    printf("\n");
for(j=1;j<=(totoalrowno-i);j++) //space calculation row-rownumber
{
printf(" ");
}
for(k=1;k<i;k++) //odd number of stars
   {
 printf("%d",k);
   }

   for(m=i-1;m>=1;m--)

{

     printf("%d",m);}

printf("\n");
}
return 0;
}















