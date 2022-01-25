# include <stdio.h>

void swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
  printf("\nInside swap function x = %d, y = %d", x, y);
}

void swap_ref(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 3, b = 8;
  printf("Before Swapping ...\n a = %d, b = %d", a, b);
  swap(a, b);  // Call by value
  printf("\nAfter Swapping ...\n a = %d, b = %d", a, b);
  swap_ref(&a, &b);
  printf("\nAfter calling swap_ref function ...\n a = %d, b = %d\n", a, b);
  return 0;
}