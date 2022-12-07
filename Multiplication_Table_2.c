#include<stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++){
        c=a*i;
        printf("%d x %d = %d
",a,i,c);
    }
}