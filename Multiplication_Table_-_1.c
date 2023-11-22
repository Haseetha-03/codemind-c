#include<stdio.h>
int main()
{
    int i,sp,ep;
    scanf("%d%d",&sp,&ep);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",sp,i,sp*i);
    }
}