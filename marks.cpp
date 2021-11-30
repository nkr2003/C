#include<stdio.h>
int main()
{
	int m,p,c,e,s,res,avg,per;
	printf("enter marks of mathematics=\n");
	scanf("%d",&m);
	printf("enter marks of physics=\n");
	scanf("%d",&p);
	printf("enter marks of chemistry=\n");
	scanf("%d",&c);
	printf("enter marks of english=\n");
	scanf("%d",&e);
	printf("enter marks of social=\n");
	scanf("%d",&s);
	res=m+p+c+e+s;
	avg=res/5;
	per=(res*100)/500;
	printf("\nthe sum of all subjects = %d",res);
	printf("\nthe avg of all subjects = %d",avg);
	printf("\nthe per of all subjects = %d",per);
	return(0);
	
}
