#include<stdio.h>
struct account
{
    int id ;
    char name[20];
    float acno;
    char category[3];
    float balance ;
   
};

int main()
{
    struct account a;
    printf("enter a bank id  :");
    scanf("%d",&a.id);
    printf("enter a account name:");
    scanf("%s",a.name);
    printf("enter a account no :");
    scanf("%f",&a.acno);
    printf("enter a category :");
    scanf("%s",a.category);
    printf("enter a bank balance  :");
    scanf("%f",&a.balance);
   
    printf("\nthe bank id  is  :%d\n\n ",a.id);
    printf("the account name  is  : %s\n\n ",a.name);
    printf("\nthe account number   is :%f\n\n ",a.acno);
     printf("the bank category  is : %s\n\n ",a.category );
     printf("the bank balance is : %f\n\n ",a.balance );
    return 0;
}
