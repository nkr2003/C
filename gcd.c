# include <stdio.h>
int main() {
  int a, b, temp;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  if (a < b) {
    //swap a and b
    temp = a;
    a = b;
    b = temp;

  }
  while (a % b != 0){
    temp = a % b;
    a = b;
    b = temp;
  }
  printf("The GCD of the two numbers is %d\n", b);
  return 0;
}