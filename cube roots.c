// c  programe to find cube roots of numbers
#include <stdio.h>

int main() {
    int n,i,cube;

    printf("enter the number:");
    scanf("%d",&n);
    printf("number is %d\n",n);

    for(i=1;i<=n;i++){
        //calculating cube
        cube=i*i*i;
        printf("number:%d\n",i);
        printf("cube of %d is %d\n",i,cube);
    }

    return 0;
}
