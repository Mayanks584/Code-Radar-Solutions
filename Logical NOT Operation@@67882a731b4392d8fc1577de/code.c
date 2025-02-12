// #include<stdio.h>
// void main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     if (!(a,b)){
//         printf("False\n");
//     }
//     else {
//         printf("True\n");
//     }
// }
#include <stdio.h>

void main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if (!(a || b)) {  // Corrected condition
        printf("False\n");
    } else {
        printf("True\n");
    }
}
