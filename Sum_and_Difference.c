#include<stdio.h>
int main()
{
    int a1,a2,s=0,d=0;
    scanf("%d%d",&a1,&a2);
    s=a1+a2;
    d=a1-a2;
    printf("%d %d
",s,d);
    float a3,a4,s1=0,d1=0;
    scanf("%f%f",&a3,&a4);
    s1=a3+a4;
    d1=a3-a4;
    printf("%0.1f %0.1f",s1,d1);
}