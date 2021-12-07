#include<stdio.h>
int main()
{
	int a,b,sum=0,N;
	printf("Enter the number");
	scanf("%d",&b);
	N=b;
	while(b>0)
	{
		a=b%10;
		sum=sum+(a*a*a);
		b=b/10;
    }
    if(N==sum)
    printf("Amrstrong number");
    else
    printf("not Amrstrong number");
    return 0;
}
