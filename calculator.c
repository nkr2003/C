# include <stdio.h>
int main() {
  int a, b;
  char op;
  
  printf("Enter two numbers (a:b) :" );
  scanf("%d:%d", &a, &b);
  
  printf("Enter an operator +, -, *, /" );
  scanf("%c", &op);
    
  switch (op) {
    case '+': printf("%d", a + b);
              break;
    case '-': printf("%d", a - b);
              break;
    case '*': printf("%d", a * b);
              break;
    case '/': printf("%d", a / b);
              break;
    case '%': printf("%d", a % b);
              break;
    default: printf("Inalid operator");
  }

  return 0;
}
