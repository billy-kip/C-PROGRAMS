// use of do..while to calculate cube of numbers
#include <stdio.h>

int main() {
    int x,y=1,cube;

    printf("enter number");
    scanf("%d",&x);
    printf("the number is %d\n",x);
    do{
        cube=y*y*y;
        printf("the number is %d\n",y);
        printf("the cube of %d is %d\n",y,cube);
        y++;
    }
    while(y<=x);


    return 0;
}
