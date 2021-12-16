#include<stdio.h>
int main()
{
	int a,b,c=0,d;
	printf("Enter a Number:");
	scanf("%d",&a);
	d=a;
	while(d!=0)
	{
		b=d%10;
		c=c*10+b;
		d/=10;
	}
	if (c==a)
	printf("%d is a palindrome",a);
	else
	printf("%d is not a palindrome",a);
}