#include<stdio.h>
int main()
{
    int y,z,x;
    scanf("%d%d%d",&z,&y,&x);
    int k=2*(y+z);
    int cost=(k*x);
    printf("%d",cost);
}