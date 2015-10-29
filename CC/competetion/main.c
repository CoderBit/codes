    #include<stdio.h>

    int main(void)
    {
    	int t,a[1000000],i,j,temp=0,index;
        scanf("%d",&t);
    	for(i=1;i<=t;i++)
        {
            scanf("%d",&a[i]);
        }
        for (i=1;i<=t; i++)
        {
            index = a[i];j = i;
            while (j > 0 && a[j-1] > index)
            {
                a[j] = a[j-1];
                j--;
            }
            a[j] = index;
        }
        for(i=1;i<=t;i++)
        {
            printf("%d\n",a[i]);
        }
    	return 0;
    }
