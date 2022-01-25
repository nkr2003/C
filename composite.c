# include <stdio.h>
# include <math.h>
int main() {
  int p, t, r;
    
  printf("Principle = " );
  scanf("%d", &p);

  printf("Rate of Interest = " );
  scanf("%d", &r);

  printf("Time period = " );
  scanf("%d", &t);

  printf("Compound Interest = %f \n", p - p * pow((1 + r/100), t) );

  return 0;
}
