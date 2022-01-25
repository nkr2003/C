# include <stdio.h>
# include <math.h>
int main(void){
  int n, number_of_digits=0, temp;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  temp = n;

  while (temp != 0){
    ++number_of_digits;
    temp /=10;
  }

  printf("number of digits = %d\n", number_of_digits);

  for (int i = 1; i<=number_of_digits; i++) {
    
    for (int j=2; j<=n/2; j++) {
      if (n%j == 0) {
        printf("False\n");
        return 0;
      }
    }
    temp = n % 10;
    n /= 10;
    n += temp * pow(10, number_of_digits-1);  
    printf("Value of n = %d\n", n);
  }
  printf("True\n");
  return 0;
}