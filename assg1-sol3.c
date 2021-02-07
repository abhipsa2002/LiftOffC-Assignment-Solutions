#include<stdio.h>
#include<math.h>
#define pi 3.141
int main()
{
    float rad,area,dm,cir;
    printf("\n Enter radius : ");
    scanf("%f",&rad);
    area = pi*pow(rad,2);
    dm=2*rad;
    cir=2*pi*rad;
    printf("\n Area= %f",area );
    printf("\n Diameter = %f ", dm);
    printf("\n Circumference = %f", cir );
    return 0;

}