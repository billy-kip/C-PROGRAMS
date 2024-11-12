// Area of a circle
#include <stdio.h>
#define PI 3.142

int main() {
    float radius,area;


    printf("enter the radius:");
    scanf("%f",&radius);

    area=2*PI*radius*radius;
    printf("the area of the circle is %.2f\n",area);

    return 0;
}
