# include <stdio.h>
int main() {
  int a;
  
  printf("Enter a number:  " );
  scanf("%d", &a);
  
  if (a % 55 ==0) 
    printf("%d is divisible by 5 and 11\n", a);
    else 
    printf("%d is not divisible by 5 and 11\n", a);
  
  return 0;
}