#include<stdio.h>
#include<math.h>
int main(){
    int n,c=0,i,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>-1;i--){
        if(a[i]!=0){
            int k=pow(2,c);
            s+=k;
        }
        c++;
    }
    printf("%d",s);
}