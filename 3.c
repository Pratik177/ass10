#include<stdio.h>
struct date
{
    int day,month,year;

};
int main()
{
    struct date c1,c2,c3;
    printf("enter first  year month and day :");
    scanf("%d %d %d",&c1.year,&c1.month,&c1.day);
    printf("enter second year month and day :");
    scanf("%d %d %d",&c2.year,&c2.month,&c2.day);
    c3.year=c1.year+c2.year;
    c3.month=c1.month +c2.month;
    if(c3.month>12)
    {
        c3.year+=1;
        c3.month-=12;
    }
    c3.day =c1.day +c2.day;
    if(c3.day>30)
    {
    
        c3.month+=1;
        c3.day-=30;
    }
    printf("the sum of two date is :%d-%d-%d",c3.year,c3.month,c3.day);
    return 0;
}