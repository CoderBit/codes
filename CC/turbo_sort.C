#include<stdio.h>

int main()
{
    long int t,n,i,a[10];
    scanf("%ld", &t);
    while(t--)
    {
        scanf("%ld",&n);
        a[n]=a[n]++;
    }
    for(i=0;i<10;i++)
    {
        if(a[i]!=0)
            printf("%ld",i+1);
    }
    return 0;
}
