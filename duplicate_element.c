# include <stdio.h>
# define SIZE 10

int list[SIZE];
int list_size;

void sort(void){
  for(int i=0; i<list_size; i++)
    for(int j=i; j<list_size; j++)
      if (list[i] > list[j]) {
        int temp = list[j];
        list[j] = list[i];
        list[i] = temp;
      }
}

int main(void){
  printf("Enter the number of elements in the list: ");
  scanf("%d", &list_size);
  printf("Enter the elements... ");
  for(int i=0; i<list_size; i++)
    scanf("%d", &list[i]);
  sort();  
  for(int i=0; i<list_size-1; i++)
    if (list[i] == list[i+1]){
      printf("The duplicate element is %d\n", i+1);
      return 0;
    }
}