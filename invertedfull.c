#include <stdio.h>  
int main()  
{  
    int i, j, rows, k, m = 1;  
    printf (" Enter the number of rows:");  
    scanf ("%d",&rows);
    for ( i = rows; i >= 1; i--)  
    {  
          
        for ( j = 1; j <= m; j++)  
        {  
            printf ("  ");
        }  
      
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* ");
        }  
        m++;  
        printf ("\n");  
    }  
}