c sructure book
#include <stdio.h>
#include<string.h>

struct book {
char title[30];
char author[30];
int publication_year;
double ISBN;
float price;

}book;
int main(){
strcpy(book.title,"Introduction to C programing");
strcpy(book.author,"John smith");
book.publication_year=2022;
book.ISBN = 9780131103627;
book.price = 49.99;


printf("title:%s\n",book.title);
printf("author:%s\n",book.author);
printf("publication_year:%d\n",book.publication_year);
printf("ISBN:%lf\n",book.ISBN);
printf("price:%f\n",book.price);


return 0;
}
