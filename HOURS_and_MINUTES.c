#include<stdio.h>
int main()
{
    int m,res,min;
    scanf("%d",&m);
    res=m/60;
    min=m-res*60;
    printf("%d Hour(s) %d Minute(s)",res,min);
}