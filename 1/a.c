#include<stdio.h>
struct detail
{
    char person[20];
    int age;
    char address[20];
    int place;
    int date;
   
};

int main()
{
    struct detail e;
    printf("enter a person name :");
    gets(e.person);
     printf("enter a person age   :");
    scanf("%d",&e.age);
    printf("enter a person address   :");
    scanf("%s",e.address);
     printf("enter a person place  :");
    scanf("%d",&e.place);
     printf("enter a person date  :");
    scanf("%d",&e.date);
  
    printf("\nthe person name is  :%s\n\n ",e.person);
    printf("the  person age is  : %d\n\n ",e.age);
    printf("\nthe person  address is   :%s\n\n ",e.address);
    printf("\nthe person contact is   :%d\n\n ",e.place);
    printf("\nthe person date is   :%d\n\n ",e.date);
    return 0;
}
