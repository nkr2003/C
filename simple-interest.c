# include <stdio.h>
int main() {
  int p, t, r;
  
  printf("Principle = " );
  scanf("%d", &p);

  printf("Rate of Interest = " );
  scanf("%d", &r);

  printf("Time period = " );
  scanf("%d", &t);

  printf("Simple Interest = %d \n", (p * t * r / 100) );

  return 0;
}
