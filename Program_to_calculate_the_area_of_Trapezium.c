#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    float res=(a+b)*h*1/2.0;
    printf("%.4f",res);
}