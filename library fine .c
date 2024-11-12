//calculation of library fine
#include <stdio.h>

int calculateFine(int daysoverdue){


    if (daysOverdue <= 7) {
        return daysOverdue * 20;
    } else if (daysOverdue <= 14) {
        return (7 * 20) + ((daysOverdue - 7) * 50);
    } else {
        return (7 * 20) + (7 * 50) + ((daysOverdue - 14) * 100);
    }
}

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date in days: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date in days: ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;
    fineAmount=calculateFine;

    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}
