#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int res=n/(k*m);
    if(n%(k*m)==0)
    {
        printf("%d",res);
    }
    else
    {
        printf("%d",res+1);
    }
}