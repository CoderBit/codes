#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,i,j,max=0;
    scanf("%d",&t);
    while(t--)
    {
        max=0;
        int a[100001];
        scanf("%d",&n);
        for(i=1;i<=100000;i++)
        {
            a[i]=0;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&j);
            a[j]++;
            if(max<a[j])
                max=a[j];
        }
        printf("%d\n",n-max);
    }
    return 0;
}
