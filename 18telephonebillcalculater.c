#include<stdio.h>
int main()

{
 int calls;
 float bill1, bill2, bill3, bill4;

printf("Enter the Number of Calls");
scanf("%d",&calls);


bill1 = 200;    //minimum fee
bill2 = 200 + (0.60 * calls);                  //charge between 100 & 150 calls
bill3 = 200 + (0.60 * calls) + (0.50 * calls);    //charge between 150 & 2000 calls
bill4 = 200 + (0.60 * calls) + (0.50 * calls) + (0.40 * calls); // charge for beyond 200 calls

 if (calls <= 100)
 {
    printf("Total Bill is %f\n",bill1);
 }

 else if (calls> 100 && calls <= 150)
 {

    printf("Total Bill is %f\n",bill2);
 }

 else if (calls >150 && calls <=200)
 {

    printf("Total Bill is %f\n",bill2);
 }

 else
 {

    printf("Total Bill is %f \n",bill3);
    }

return 0;
}










