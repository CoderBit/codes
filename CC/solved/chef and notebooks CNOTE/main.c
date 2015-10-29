#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,x,y,k,n,p,c,i,d,o;
    scanf("%d",&t);

    while(t--)
    {
        d=0,o=0;
        scanf("%d %d %d %d",&x,&y,&k,&n);
        d=x-y;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&p,&c);
            if(p>=d && c<=k)
            {
                o=1;
            }
        }

        if(o==1)
            printf("LuckyChef\n");

        else
            printf("UnluckyChef\n");
    }

    return 0;
}
