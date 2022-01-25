# include <stdio.h>
# include <math.h>
# define SIZE 10
int main(void) {
    int bits_list[SIZE];
    int n, decimal=0;
    printf("Enter the number of bits in the array: ");
    scanf("%d", &n);
    printf("Enter the bits... ");
    for(int i=0; i<n; i++)
        scanf("%d", &bits_list[i]);
    for(int i=0; i<n; i++)
        decimal += bits_list[i]* pow(2, n-i-1);
    printf("The decimal equivalent of the binary number is %d\n", decimal);
  
    return 0;
}