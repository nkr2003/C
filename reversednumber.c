#include<stdio.h>
int main()
{
	int a,b=0,c;
	printf("Enter a number:");
	scanf("%d",&a);
	while(a!=0)
	{
		c=a%10;
		b=b*10+c;
		a=a/10;
	}
	printf("Reversed Number:%d",b);
	return 0;
}