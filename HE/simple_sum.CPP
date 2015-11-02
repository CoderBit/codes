#include <stdio.h>

int main()
{
    int n,i,count;
    long long int a,k;
        count=0;
        scanf("%d %lld", &n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%lld", &a);
            if(a%k==0)
                count++;
        }
    printf("%d",count);
    return 0;
}
