#include<stdio.h>
struct author
{
    int id ;
    char name[20];
    float contact;
    char email[50];
    char  gender[10];
   
};

int main()
{
    struct author a;
    printf("enter a author id   :");
    scanf("%d",&a.id);
    printf("enter a author  name :");
    scanf("%s",a.name);
    printf("enter a author  contact :");
    scanf("%f",&a.contact);
    printf("enter a author  gmail :");
    scanf("%s",a.email);
    printf("enter a gender :");
    scanf("%s",a.gender);

    printf("\nthe author id is  :%d\n\n ",a.id);
    printf("the author name  is  : %s\n\n ",a.name);
    printf("\nthe author  address is :%f\n\n ",a.contact);
    printf("the author email is  : %s\n\n ",a.email);
    printf("the author gender  is  : %s\n\n ",a.gender);

    return 0;
}
