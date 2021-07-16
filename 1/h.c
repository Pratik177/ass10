#include<stdio.h>
struct point
{
    int x,y,c;
};
int main()
{
    struct point a;
    printf("enter a x ");
    scanf("%d",&a.x);
    printf("enter a y" );
    scanf("%d",&a.y);
    a.c=a.x+a.y;
    printf("the sum is :%d\n",a.c);
    printf("the value of x is :%d\n",a.x);
    printf("the value of y is  :%d\n",a.y);
    return 0;
}