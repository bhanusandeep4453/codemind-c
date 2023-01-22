#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    scanf("%[^
]s",s);
    int sum=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if( s[i]>='0' && s[i]<='9')
        sum=sum+(s[i]-'0');
    }
    printf("%d",sum);
}