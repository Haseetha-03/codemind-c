#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    float z=(a+b)*h*1/2.0;
    printf("%.4f",z);
}