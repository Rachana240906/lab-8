#include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[5],arr2[5],i;
	printf("enter elements into first array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nfirst array:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\nenter elements into second array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("\nsecond array:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr2[i]);
	}
	int temp;
	for(i=0;i<5;i++)
	{
		temp=*(arr1+i);
		*(arr1+i)=*(arr2+i);
		*(arr2+i)=temp;
	}
	printf("after exchange:\n");
	printf("first array:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\nsecond array:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr2[i]);
	}
}
