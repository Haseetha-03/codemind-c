#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,s,i,sum=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
{
    s=sqrt(i);
    
        sum+=s;

}
printf("%.2f",sum);
}