#include<stdio.h>
int main()
{
  float sum=0,n,i;
  scanf("%f",&n);
  for(i=1;i<=n;i++)
  {
      sum=sum+(1/i);
  }
  printf("%.2f",sum);
}