# include <stdio.h>
int main() {
    int a=20, bit_position=2;
    
    printf("Bit status = %d\n", (a >> bit_position) & 2 );
    
    return 0;
}
