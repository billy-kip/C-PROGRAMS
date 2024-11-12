// calculate volume of cylinder
#include <stdio.h>
#define PI 3.142
int main() {
    int radius,height;
    float volume;

    printf("enter the radius of the cylinder:");
    scanf("%d",&radius);

    printf("enter the height of the cylinder:");
    scanf("%d",&height);

    volume=PI*radius*radius*height;
    printf("the volume of the cylinder is %.4f\n",volume);

    return 0;
}
