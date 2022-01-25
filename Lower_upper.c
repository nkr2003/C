# include <stdio.h>

int main(void){
  char ch;
  printf("Enter a character: ");
  ch = getchar();
  if ( (ch <= 122) && (ch >= 97))
    ch -= 32;
  else if ( (ch <= 90) && (ch >= 65))
    ch += 32;
  else {
    printf("Incorrect Data\n");
    return 0;
  }
  printf("Changed case is %c\n", ch);
  return 0;
}