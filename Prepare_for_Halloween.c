#include<stdio.h>
int  main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a,b,t1,t2;
        scanf("%d%d",&a,&b);
        t1=2*a;
        t2=5*b;
        if(t1>t2)
        printf("Chocolate
");
        else if(t1==t2)
        printf("Either
");
        else if(t1<t2)
        printf("Candy
");
    }
}