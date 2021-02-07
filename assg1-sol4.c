#include<stdio.h>
int main()
{
    int p,c,m,b,cs, total;
    float  per; char grade;
    printf("\n enter marks of physics, chemistry, mathematics, computer science and biology respectively : ");
    scanf("%d %d %d %d %d", &p, &c, &m,&cs ,&b);
    total = p+c+m+b+cs;
    per= total/5.0;
    if(per>=90.00)
        grade = 'A';
    else if(per>=80.00)
        grade='B';
    else if (per>=70.00)
        grade = 'C';
    else if (per>=60.00)
        grade = 'D';
    else if(per>=40.00)
        grade = 'E';
    else
        grade = 'F';
    printf("\n Grade is : %c ", grade);
    return 0;

}