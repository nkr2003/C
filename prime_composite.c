# include <stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int counter=2; counter < n; counter++) {
        if (n % counter == 0) {
            printf("Composite");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}