#include<stdio.h>
int fact(int N)
{
if (N <= 1)
return 1;
return N*fact(N-1);
}

int nPr(int N, int R)
{
return fact(N)*fact(N+1)/fact(N-R);
}

int main()
{
int N, R;
scanf("%d", &N);
scanf("%d", &R);
if (N>10)
{
printf("Invalid");
}
else{
printf("%d", nPr(N, R));
}
return 0;
}
