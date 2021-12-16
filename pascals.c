#include<stdio.h>
int main()
{
	int a;
	printf("Enter number of Rows:");
	scanf("%d",&a);
	for (int b=1;b<=a;b++)
	{
		int c=1;
		for (int i=1;i<=b;i++)
		{
			printf("%d",c);
			c=c*(b-i)/i;
		}
		printf("\n");
	}
	return 0;
}