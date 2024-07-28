// [2] pyramid star pattern

#include<stdio.h>

int main(){
    int rows;
    printf("enter a number : ");
    scanf("%d",&rows);
    int nsp=rows-1;
    for(int i=1; i <= rows ; i++) {
        for(int k=nsp; k>=0; k--){
            printf(" ");
        }
        nsp=nsp-1;
        for( int j=1 ; j<=2*i-1 ; j++){
            printf("*");
        }
         printf("\n") ;
    }
    return 0;
}