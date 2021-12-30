#include<stdio.h>
int main()
{
    float pie,radius,area;

    pie=3.14;
    printf("Enter radius of circle: \n");
    scanf("%f",&radius);

    area = pie * radius * radius;

    printf("area IS %f",area);
    return 0;
}
