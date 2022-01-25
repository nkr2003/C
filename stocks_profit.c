# include <stdio.h>
# define SIZE 10
int main() {
  int stock_prices[SIZE];
  int n,max=0;
  printf("Enter the number of stock prices: ");
  scanf("%d", &n);
  printf("The stock prices are ...\n");
  for(int i=0; i<n; i++)
    scanf("%d", &stock_prices[i]);
    for(int i=0; i<n; i++)
      for (int j=i; j<n; j++) 
        if ((stock_prices[j] - stock_prices[i]) > max)
          max = stock_prices[j] - stock_prices[i];
        
  printf("The maximum profit that is possible is %d\n", max);
  return 0;
}