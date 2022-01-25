# include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter the angles of a triangle (in degrees):\n" );
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

  if (a + b + c != 180) 
    printf("Invalid Angles\n");
  else if (a == b && b == c)
    printf("Equilateral Triangle\n");
  else if (a==b || b==c || c==a)
    printf("Isoseles\n");
  else 
    printf("Scalene\n");
  return 0;
}
