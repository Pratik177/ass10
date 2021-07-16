#include<stdio.h>
struct distance
{
    int feet,inch;

};
int main()
{
    struct distance c1,c2,c3;
     printf("enter first and  feet inch :");
    scanf("%d%d",&c1.feet,&c1.inch);
    printf("enter second feet and  inch :");
    scanf("%d%d",&c2.feet,&c2.inch);
    c3.feet=c1.feet+c2.feet;
    c3.inch=c1.inch +c2.inch;
    if(c3.inch>12)
        c3.feet+=1;
        c3.inch-=12;
    printf("the sum of two distance is :%d%d",c3.feet,c3.inch);
    return 0;
}