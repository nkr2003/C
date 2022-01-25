# include <stdio.h>
int main() {
    int number_01, divisor;
    
    printf("Enter an integer : ");
    scanf("%d", &number_01);

    printf("Enter divisor : ");
    scanf("%d", &divisor);

    printf("Reminder = %d\n", number_01 - divisor * (number_01/divisor));
    
    return 0;
}