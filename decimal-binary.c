# include <stdio.h>
int main() {
  int n, r, n_b=0;
  printf("Enter a decimal number : ");
  scanf("%d", &n);
  int f = 1;
  
  while ( n!=0){
    //printf("%d", n%2);
    r = n%2;
    n_b = n_b + r*f;
    f = f*10;
    n = n/2;
  }
  printf("%d\n", n_b);
  return 0;
}
