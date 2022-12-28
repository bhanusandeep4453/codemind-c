#include<stdio.h>
int main(){
    int n,f=0,s=1,nxt=0;
    scanf("%d",&n);
    while(n>nxt){
        nxt=f+s;
        f=s;
        s=nxt;
    }
    if(n-f<s-n)
    printf("%d",f);
    else if(n-f==s-n)
    printf("%d %d",f,s);
    else
    printf("%d",s);
}