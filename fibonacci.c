#include<stdio.h>
int main()
{
	int n,f,s,p,i;
	printf("the number of terms :");
	scanf("%d",&n);
	f=0;
	s=1;
	printf("%d",f);
	printf("%d",s);
	for (i=3;i<n;i++)
	{
		p=f+s;
		printf("%d",p);
		f=s;
		s=p;
	}
	return 0;
}