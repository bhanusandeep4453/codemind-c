#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c=0,arr[n],min=1000,max=-1000;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(arr[i]==c)
        {
            if(min>arr[i])
            {
                min=arr[i];
            }
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
    }
    if(min!=1000&&max!=-1000)
    {
        printf("%d %d",min,max);
    }
    else
    {
        printf("-1");
    }
}