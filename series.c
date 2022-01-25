# include <stdio.h>

int power_function(int m, int n){
  int output=1;
  for (int i=1; i<=n; i++){
    output = output * m;
  }
  return output;
}

int factorial_function(int k){
  int fact = 1;
  for (int i=1; i<=k; i++){
    fact = fact * i;
  }
  return fact;
}

int main() {
  int n, x, sign = -1;
  double sum=1;
  printf("Enter the values of n and x of the series\n");
  printf("x = ");
  scanf("%d", &x);
  printf("n = ");
  scanf("%d", &n);

  for (int i=1; i<=n-1; i++) {
    sign = power_function(-1, i);
    sum = sum + (sign)*power_function(x, i*2)/factorial_function(i*2);
  }
  printf("Sum of the series = %f\n", sum);
  return 0;
}  