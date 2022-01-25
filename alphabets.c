# include <stdio.h>
int main() {
  int n;
  char ch = 'A';
  printf("Enter how many lines of alphabets to be printed: ");
  scanf("%d", &n);
  for (int i = 1; i<=n; i++){
    for (int j=1;j<=i; j++ ){
      printf("%c", ch);
    }
    ++ch;
    printf("\n");
  }
}