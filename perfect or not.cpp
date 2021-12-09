#include<stdio.h>
int main()
{
	int s,i,n,N;
	printf("Enter the number: ");
	scanf("%d",&n);
	s=0;
	N=n;
	for (i=1;i<n;i++)
	{
		if ((n%i)==0)
		s=s+i;
	}
	if (N==s)
	{
		printf("the number is perfect");
	}
	else
	{
		printf("the number is not perfect");
	}
}
