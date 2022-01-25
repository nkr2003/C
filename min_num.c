# include <stdio.h>
int main() {
  int a, b, c;
  
  printf("Enter three numbers (a:b:c) :  " );
  scanf("%d:%d:%d", &a, &b, &c);
  
  if (a < b && b < c) 
    printf("Smallest  is %d\n", a);
  else if (a > b && b > c)
    printf("Smallest  is %d\n", c);
  else 
    printf("Smallest  is %d\n", b);
  
  return 0;
}