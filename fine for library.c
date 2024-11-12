// calculation of fine for library books
#include <stdio.h>
int minus(int return_date,int due_date);
int product(int days_overdue,int fine_rate);

int main() {
    int due_date;
    int return_date;
    int days_overdue;
    int fine_rate;
    int fine_amount;
    int book_id;

    printf("enter due_date :");
    scanf("%d",&due_date);

    printf("enter the return_date:");
    scanf("%d",&return_date);

     days_overdue=return_date-due_date;

     if(days_overdue<0){
         fine_rate=0;

     }
     else if (days_overdue<=7){
         fine_rate=20;
     }
     else if(days_overdue<=14){
         fine_rate=50;

     }
     else{
         fine_rate=100;

     }
     fine_amount=days_overdue*fine_rate;
     printf("days_overdue is %d\n",days_overdue);
     printf("the fine_rate is %d",fine_rate);
     printf("total fine_amount is %d\n",fine_amount);

    return 0;
}
int minus (int return_dates,int due_date){
return return_dates-due_date;
}

int product (int days_overdue,int fine_rate){
return    days_overdue*fine_rate;
}
