#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    if ( a % 4 == 0 ){
        printf("Leap Year\n");
    }
    else if (a % 400 == 0){
        printf("Leap Year\n");
    }
     else if (a % 100 ==  0){
       printf("Not a Leap Year\n");
}
    else{
        printf("Not a Leap Year\n");
    }
}