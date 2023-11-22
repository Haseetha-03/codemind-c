#include<stdio.h>
int main()
{
     float salary,hra,da,pf,grossSalary;
    scanf("%f%f%f",&salary,&hra,&da);
    pf=0.12*salary;
    grossSalary=(salary+hra+da+pf);
    printf("%.2f
",pf);
    printf("%.2f
",grossSalary);
}