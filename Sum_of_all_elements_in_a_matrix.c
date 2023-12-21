#include<stdio.h>
int main()
{
    int i,j,r,c,sum=0;
    scanf("%d%d",&r,&c);
    int mat[i][j];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+mat[i][j];
        }
    }
        printf("%d",sum);
}