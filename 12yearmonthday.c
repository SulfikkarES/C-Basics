#include<stdio.h>
int main()
{
int year,ayear,amonth,aday,byear,bmonth,bday;

printf("enter a number");
scanf("%d",&year);

ayear = year/365;           //365 days in a year so remainder is year
byear = year -ayear * 365;  //to avoid balance denomination

amonth = byear / 30;      //30 days in a month,remainder giver number of months in the given number
bmonth = byear - amonth * 30;   //to avoid balance denomination

aday = bmonth / 7;    //7 days in a week,remainder gives number of days
bday = bmonth - aday * 7;    //to avoid balance denomination



printf("%dyear month  %d days are %d",ayear,amonth,bday);
return 0;




}
