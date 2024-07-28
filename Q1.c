// [1] Right angle triangle star pattern

#include <stdio.h>

int main() {
    int  n;

    /* Input rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &n);

    /* Iterate through rows */
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {
            printf("*");
        }  
        printf("\n");
    }        
    return 0;
}