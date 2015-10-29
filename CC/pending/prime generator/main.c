#include <stdio.h>
int main()
{
    int t,i,j,k=0,y=0;
    long int m,n;
    scanf("%d",&t);
    while(k<t)
    {
        scanf("%ld %ld",&m,&n);
    if(m==1)
        m+=1;
    i=m;
    while(i<=n)
    {
         y=0,j=2;
         while(j<i)
         {
             if(i%j==0)
             y=1;
             j++;
         }
         if(y!=1)
         printf("%d\n",i);
         i++;
    }
    k++;
    }
    return 0;
}
