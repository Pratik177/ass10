#include<stdio.h>
struct item
{
    int code;
    char name[20];
    float price;
   
};

int main()
{
    struct item e;
    printf("enter a item code  :");
    scanf("%d",&e.code);
    printf("enter a item name :");
    scanf("%s",e.name);
    printf("enter a item price   :");
    scanf("%f",&e.price);

    printf("\nthe id is  :%d\n\n ",e.code);
    printf("the name is  : %s\n\n ",e.name);
    printf("\nthe person  address is   :%f\n\n ",e.price);
    return 0;
}
