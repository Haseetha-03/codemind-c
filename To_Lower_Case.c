#include<stdio.h>
int main()
{
	char str[20];
	int i=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
	   if(str[i]>='A' && str[i]<='Z')  //65 90
		  {
		    str[i]=str[i]+32;
	      }
	}
	printf("%s",str);
}