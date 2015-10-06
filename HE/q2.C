    #include<stdio.h>
    #include<string.h>

    int max( int x, int y)
    { return (y > x)? y : x; }

    int maxSubArraySum(char a[], int size)
    {
       int max_so_far = -9999, i,temp=0;
       int curr_max = 0;

       for (i = 0; i < size; i++)
       {
           if(a[i]=='R')
            temp=-1;
           else if(a[i]=='K')
            temp=1;
            curr_max = max(temp, curr_max+temp);
            max_so_far = max(max_so_far, curr_max);
       }
       return max_so_far;
    }

    int main()
    {
        char S[1000000];
        int T,x,max_sum,total,before,i;
        scanf("%d",&T);
        while(T--)
        {
            scanf("%s",&S);
            x=strlen(S);
            before=0;
            total=0;
            for(i=0;i<x;i++)
            {
                if(S[i]=='R')
                    before++;
            }
            max_sum = maxSubArraySum(S, x);
            total = before + max_sum;
            printf("%d\n",total);
        }
        return 0;
    }
