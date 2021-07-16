#include<stdio.h>
struct book
{
    int ISBN ;
    char name[20];
    float contact;
    char category[50];
    int page ;
   
};

int main()
{
    struct book a;
    printf("enter a ISBN   :");
    scanf("%d",&a.ISBN);
    printf("enter a author  name :");
    scanf("%s",a.name);
    printf("enter a author  contact :");
    scanf("%f",&a.contact);
    printf("enter a book catagory :");
    scanf("%s",a.category);
    printf("enter a book page  :");
    scanf("%d",&a.page );

    printf("\nthe book ISBN is  :%d\n\n ",a.ISBN);
    printf("the book name  is  : %s\n\n ",a.name);
    printf("\nthe contact number  is :%f\n\n ",a.contact);
    printf("the book category  is  : %s\n\n ",a.category);
    printf("the book page   is  : %d\n\n ",a.page);

    return 0;
}
