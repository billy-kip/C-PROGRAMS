// calculation of surface area of cylinder
#include <stdio.h>
#define PI 3.142

int main() {
    int radius,height;
    float lateral_area,total_area;

    printf("enter the radius of the cylinder:");
    scanf("%d",&radius);

    printf("enter the height of the cylinder:");
    scanf("%d",&height);

    lateral_area=2*PI*radius*height;
     printf("lateral area of the cylinder %10.4f\n",lateral_area);

    total_area=2*PI*radius*(radius + height);
     printf("total area of the cylinder %10.4f\n",total_area);



    return 0;
}
