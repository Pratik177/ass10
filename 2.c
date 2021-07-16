#include<stdio.h>
struct comp
{
    int i,r;
};
int main()
{
    struct comp c1,c2,c3;
    printf("enter a real number of 1st complex : ");
    scanf("%d",&c1.r);
    printf("enter a imaginary number of 1st complex : ");
    scanf("%d",&c1.i);
    printf("enter a real number of 2nd complexr : ");
    scanf("%d",&c2.r);
    printf("enter a imaginary number of 2nd complex : ");
    scanf("%d",&c2.i);
    c3.r=c1.r+c2.r;
    c3.i=c1.i+c2.i;
    printf("the final complex number is: %d + %di ",c3.r,c3.i);
    return 0;
}