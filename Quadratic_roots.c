# include <stdio.h>
# include <math.h>
int main() {
  int x, y, z;
  printf("Enter valid values for x, y and z...\n");
  printf("x = ");
  scanf("%d", &x);
  printf("y = ");
  scanf("%d", &y);
  printf("z = ");
  scanf("%d", &z);

  int determinant = y*y - 4*x*z;
  
  if (determinant == 0)
    printf("The expression has equal roots : %d\n", -y/(2*x));
  else if (determinant < 0)
    printf("The expression has imaginary roots\n");
  else {
    float temp = sqrt(determinant);
    printf("Root1 = %f\n", (-b + temp)/(2*x) );
    printf("Root2 = %f\n", (-b - temp)/(2*x) );
  }
}
