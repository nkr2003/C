# include <stdio.h>
int main(void) {
  int n, fact = 1, sum = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n > 10)
    printf("Too big a number\n");
  else if (n < 0)
    printf("Negative number\n");
  else {
    while (n > 0) 
      fact *= n--;
    printf("Factorial of the given number is %d\n", fact);
    while (fact > 0) {
      sum += (fact % 10);
      fact /= 10;
    }
    printf("Sum of the digits is %d\n", sum);
  }
  return 0;
}