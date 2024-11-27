#include<stdio.h>
struct item{
	char item_name[20];
	int quantity;
	int price;
};
void amount(int price,int quantity)
{
	int q;
	q=price*quantity;
	printf("amount:%d",q);
}
int main()
{
	struct item i1;
	printf("enter item name");
	scanf("%s",&i1.item_name);
	printf("enter the quantity");
	scanf("%d",&i1.quantity);
	printf("enter the price");
	scanf("%d",&i1.price);
	amount(i1.price,i1.quantity);
}
