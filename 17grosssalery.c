#include<stdio.h>
int main()
{

float basicsalery,grosssalery,da,hra;

printf("Enter basicsalery");
scanf("%f",&basicsalery);


if(basicsalery < 1500)
{
hra = basicsalery * 10 / 100;
da = basicsalery * 90 / 100;
}

else
{
hra = 500;
da = basicsalery * 98 / 100;
}

grosssalery = basicsalery + hra + da;

printf("gross salery is RS. %f",grosssalery);

return 0;
}





