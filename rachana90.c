#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20];
	int ws,wos,s,i;
	printf("enter the string");
	gets(ch);
	puts(ch);
	ws=strlen(ch);
	for(i=0;i<20;i++)
	{
		if(*(ch+i)==' ')
		{
			s=s+1;
		}
	}
	wos=ws-s;
	printf("\nwith spaces=%d",ws);
	printf("\nwithout spaces=%d",wos);
}
