#include <stdio.h>
#include <string.h>

int main()
 {
    int d,l1,l2,cmp;
	char s1[10000],s2[000000];
	scanf("%d",&d);
	while(d--)
	{
	    scanf("%s",s1);
	    scanf("%s",s2);
	    l1=strlen(s1);
	    l2=strlen(s2);
	    cmp=strcmp(s1,s2);
        if(cmp!=0)
        {
            printf("-1");
        }
        else
        {
            if(l1>l2)
                printf("1");
            else

        }
	}
	return 0;
}
