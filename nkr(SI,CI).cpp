#include<stdio.h>
int main()
{ 
int p,t,r,si,ci;
p=5000,t=3,r=5;
si=p*t*r/100;
printf("Simple Interest: %d\n",si);
ci=p*(1+r/100)*t;
printf("Compound Interes: %d\n",ci);
}
