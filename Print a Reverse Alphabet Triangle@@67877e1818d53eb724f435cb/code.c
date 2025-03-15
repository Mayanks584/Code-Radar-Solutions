#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    for(int i=n;i>0;i--){
        for(int j =1;j<=i;j++){
            a = j + 64;
            int d  = (char)a;
            printf("%c",d);
        }
        printf("\n");
    }
    return 0;
}