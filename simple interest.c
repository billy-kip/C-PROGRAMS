// calculation of simple interest
#include <stdio.h>

int main() {
    double principle_amount;
    int rate;
    int time;
    double simple_interest;

    printf("enter the principle_amount:");
    scanf("%lf",&principle_amount);

    printf("enter the rate:");
    scanf("%d",&rate);

    printf("enter time:");
    scanf("%d",&time);


    simple_interest=principle_amount*time*rate/100;
    printf("the simple_interest is %10.4lfkenyan shillings\n",simple_interest);
    return 0;
}
