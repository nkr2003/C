# include <stdio.h>
int main(void) {
  int n, count = 0;
  printf("Accept a positive integer: ");
  scanf("%d", &n);
  do {
    count++;
    if (n%2 == 0)
      n /= 2;
    else
      n = (3*n) + 1;
  } while(n != 1);
  printf("Number of terms in the collatz sequence is %d\n", count+1);
  return 0;
}