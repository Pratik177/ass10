#include<stdio.h>
struct customer
{
   int id;
    char name[20];
    char address[20];
    float contact;
};

int main()
{
    struct customer e;
    printf("enter a employee id  :");
    scanf("%d",&e.id);
    printf("enter a person name :");
    scanf("%s",e.name);
    printf("enter a person address   :");
    scanf("%s",e.address);
     printf("enter a person contact   :");
    scanf("%f",&e.contact);
  
    printf("\nthe id is  :%d\n\n ",e.id);
    printf("the name is  : %s\n\n ",e.name);
    printf("\nthe person  address is   :%s\n\n ",e.address);
    printf("\nthe person contact is   :%f\n\n ",e.contact);
    return 0;
}
