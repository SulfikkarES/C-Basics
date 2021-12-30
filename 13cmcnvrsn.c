#include<stdio.h>
int main()
{
int feet,inchs,cm;
float f,m,s;
printf("enter feet");
scanf("%d",&feet);

printf("enter inch");
scanf("%d",&inchs);

f = feet * 30.48;  //1 feet = 30.48cm
m = inchs * 2.54 ;       //1 inch = 2.54cm
s = f + m;

printf("total centimeter is %f",s);

return 0;
}
