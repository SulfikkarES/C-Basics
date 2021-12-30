
#include<stdio.h>12
int main()
{

    int amt,a500,a100,a50,a20,a10,a5,a1,b500,b100,b50,b20,b10,b5,b1;
    printf("enter a number");
    scanf("%d",&amt);

    a500=amt/500;         //for remainder
    b500=amt-a500*500;   //removal of 500 and taking balance denominations

    a100=b500/100;        //for remainder
    b100=b500-a100*100;   //removal of 100 and taking balance denominations

    a50=b100/50;        //for remainder
    b50=b100-a50*50;    //removal of 50 and taking balance denominations

    a20=b50/20;      //for remainder
    b20=b50-20*20;    //removal of 20 and taking balance denominations

    a10=b20/10;         //for remainder
    b10=b20-a10*10;    //removal of 10 and taking balance denominations

    a5=b10/5;    //for remainder
    b5=b10-a5*5;    //removal of 5 and taking balance denominations

    printf("%d %d %d %d %d %d",a500,a100,a50,a10,a5);
    return 0;
}


