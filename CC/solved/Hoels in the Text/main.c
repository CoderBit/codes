#include <stdio.h>
int main()
{
    int ch,n,i,h;
    char a[100];
    scanf("%d",&ch);
    while(ch--)
    {
        h=0;
        scanf("%s",a);
        n=strlen(a);
        for(i=0;i<n;i++)
        {
            if(a[i]=='A'||a[i]=='D'||a[i]=='O'||a[i]=='P'||a[i]=='Q'||a[i]=='R')
                h++;
            else if(a[i]=='B')
                h+=2;
        }
        printf("%d\n",h);
    }
    return 0;
}
