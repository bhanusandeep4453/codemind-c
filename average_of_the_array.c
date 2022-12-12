#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    float avg;
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    float t;
    t=n;
    avg=s/t;
    printf("%0.2f",avg);
}