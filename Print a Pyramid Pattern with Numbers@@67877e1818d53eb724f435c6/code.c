#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        // Print spaces for alignment
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        // Print the numbers in the pattern
        for(int k=1;k<=2*i-1;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}
