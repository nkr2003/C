#include<stdio.h>
void swap(int x,int y);
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
main()
{
    int x,y;
    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping\nx = %d\ny = %d\n",x,y);
    swap(x,y);
    printf("After swapping\nx = %d\ny = %d\n",x,y);
    return 0;
}
