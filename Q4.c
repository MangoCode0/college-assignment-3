// [4] full diamond star paterm

 #include<stdio.h>

int main(){
    int n;
    printf("enter no. of rows: ");
    scanf("%d",&n);
    int i, j;

    // Print the top half of the diamond (including the middle line)
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}