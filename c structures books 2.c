//c srtuctures book 2
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
strcpy(book.title,"introduction to c program");
strcpy(book.author,"John smith");
book.publication_year=2022;
book.ISBN=9780131103627;
book.price=49.99;


printf("enter book title:");
scanf("%[^\n]s",&book.title);
printf("title:%s\n",book.title);

printf( "enter author:");
scanf("%[^\n]s",&book.author);
printf("author:%s\n",book.author);

printf("enter the publication year:");
scanf("%d",&book.publication_year);
printf("publication_year:%d\n",book.publication_year);

printf("enter ISBN:");
scanf("%lf",&book.ISBN);
printf("ISBN:%lf\n",book.ISBN);

printf("enter price of the book:");
scanf("%f",&book.price);
printf("price:%f\n",book.price);


return 0;
}
