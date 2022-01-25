# include <stdio.h>
int main() {
  int n;
  int x=1;
    printf("Enter how many lines of numbers to be printed: ");
  scanf("%d", &n);
  for (int i = 1; i<=n; i++){
    for (int j=1;j<=i; j++ ){
      printf("%d ", x++);
    }
    printf("\n");
  }
}