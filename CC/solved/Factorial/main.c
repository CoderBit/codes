#include <stdio.h>
#include <math.h>
int main()
{
    int ch,n;
    scanf("%d",&ch);
    while(ch>0)
    {
    int j=1,p2=1,s2=0;
    scanf("%d",&n);
            while(p2>0)
            {
                p2=n/(pow(5,j));
                s2+=p2;
                j++;
            }
    printf("%d\n",s2);
    ch--;
    }
    return 0;
}
