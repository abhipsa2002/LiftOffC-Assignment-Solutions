#include<stdio.h>
int main()
{
    float cl,fh;
    printf("Enter temperature in celsius scale : "  );
    scanf("%f",&cl);
    fh= (((9.00/5.00)*cl)+32.00);
    printf("%f in farenheit is = %f ", cl, fh);
    return 0;
}