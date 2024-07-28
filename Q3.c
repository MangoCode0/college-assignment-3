// [3] half diamond star patern

#include<stdio.h>

int main(){
    int n;
    printf("enter no. of rows: ");
    scanf("%d",&n);

int i, j;

    // Print the top half of the diamond
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
