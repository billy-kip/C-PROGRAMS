// zetech university grading system
#include <stdio.h>

int main() {
    int maths,physics,chemistry;
    float averge;
    char grade;

    printf("enter the marks of maths,physics and chemistry:");
    scanf("%d %d %d",&maths,&physics,&chemistry);

    average=(maths+physics+chemistry)/3;

    if(average>=70 && average<100){
        grade='A';
    }
    if else(average>=60 && average<70){
        grade='B';
    }
    if else(average=>50 && average<60){
        grade='C';
    }
    if else(average>=40 && average<50){
        grade='D';
    }
    else(average<40){
        grade='E';
    }
    printf("average is %f\n",average);
    printf("grade is %c\n",grade);


    return 0;
}
