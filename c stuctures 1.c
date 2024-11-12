 Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
struct student {
char name[50];
char reg_no[50];
char email[50];
int phone_no,ID;
float marks;

} student1, student2;
int main(){
strcpy(student1.name,"billy");
strcpy(student1.reg_no,"bcs-05-0037/2044");
strcpy(student1.email,"billy@gmail.com");
student1.ID = 67474847;
student1.phone_no = 647635567;
student1.marks = 75.5;

printf("name:%s\n",student1.name);
printf("reg_no:%s\n",student1.reg_no);
printf("email:%s\n",student1.email);
printf("ID:%d\n",student1.ID);
printf("phone_no:%d\n",student1.phone_no);
printf("marks:%f",student1.marks);

return 0;
}
