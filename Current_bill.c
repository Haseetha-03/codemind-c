#include<stdio.h>
int main()
{
    int u;
    float unitcost,tbill;
    scanf("%d",&u);
    if (u<200)
    {
        unitcost=1.20;
    }
    else if(u>=200 && u<400)
    {
        unitcost=1.50;
    }
    else if(u>=400 && u<600)
    {
        unitcost=1.80;
    }
    else
    {
        unitcost=2.00;
    }
    float bill= u*unitcost;
    if(bill>400)
    {
        tbill=bill+(bill*0.15);
    }
    else
    {
        tbill=bill+100;
    }
    printf("%.2f",tbill);
    
}