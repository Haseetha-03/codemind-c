#include<stdio.h>
int main()
{
    int x,y,w,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(x==w||y==w||z==w||x+y==w||y+z==w||x+z==w)
     {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}