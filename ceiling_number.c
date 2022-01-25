# include <stdio.h>
# define SIZE 10
int main() {
  int sorted_array[SIZE];
  int n, terms, i=0;
  
  printf("Ënter the number of terms in the array: ");
  scanf("%d", &terms);

  printf("Enter the numbers: ");
  for(i=0; i<terms; i++)
    scanf("%d", &sorted_array[i]);
  
  printf("Enter the number to find its ceiling: ");
  scanf("%d",&n);

  for (i=0;i<terms; i++){
    if (n <= sorted_array[i]){
        printf("The ceiling of the given number is %d\n", sorted_array[i]);
        return 0;
    }
  }      
  
  printf("The ceiling of the given number is %d\n", sorted_array[i-1]);
  return 0;
}