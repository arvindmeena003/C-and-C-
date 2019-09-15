#include<stdio.h>
#include<conio.h>
int main()
{

struct arvind
{int roll;
char name[100];
int salary;

}data={14,"arviind meena",1500000};
printf("roll no=%d\n",data.roll);
puts(data.name);
printf("\nsalary=%d",data.salary);
return 0;
}
