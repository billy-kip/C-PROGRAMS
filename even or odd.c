// c function to check  even and odd number
#include <stdio.h>
void evenorodd(int number) {


    if ( number %2 ==0){
    printf ("the number is even\n");
    }
else{
    printf("the number is odd\n");
}
}

int main() {
    int number;
    printf("enter number:");
    scanf("%d",&number);
    evenorodd(number);





    return 0;
}
