#include<stdio.h>
struct time
{
    int hour,minute,second;

};
int main()
{
    struct time c1,c2,c3;
    printf("enter first  hour minute and second :\n");
    scanf("%d %d %d",&c1.hour,&c1.minute,&c1.second);
    printf("enter second hour minute and second :\n");
    scanf("%d %d %d",&c2.hour,&c2.minute,&c2.second);
    c3.hour=c1.hour+c2.hour;
    c3.minute=c1.minute +c2.minute;
    if(c3.minute>60)
    {
        c3.hour+=1;
        c3.minute-=60;
    }
    c3.second =c1.second +c2.second;
    if(c3.second>60)
    {
    
        c3.minute+=1;
        c3.second-=60;
    }
    printf("the sum of two date is  - %d:%d:%d",c3.hour,c3.minute,c3.second);
    return 0;
}