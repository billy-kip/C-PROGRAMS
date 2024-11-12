// Calculating the compound interest
#include <stdio.h>
#include <math.h>

int main() {
    double principal;
    int rate,time;
    double compound_interest,amount;

    printf("enter the principal amount:");
    scanf("%lf",&principal);

    printf("enter rate:");
    scanf("%d",&rate);

    printf("enter the time:");
    scanf("%d",&time);

    amount=principal*rate*pow((1+rate/100),time);
     compound_interest=amount-principal;

    printf("the amount is %.2lf\n",amount);

    printf("the compound_interest is %.2lf\n",compound_interest);

    return 0;
}
