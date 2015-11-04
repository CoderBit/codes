// A Dynamic Programming solution for Rod cutting problem

#include<stdio.h>
#include<limits.h>

// A utility function to get the maximum of two integers
int max(int a, int b) { return (a > b)? a : b;}

/* Returns the best obtainable price for a rod of length n and
   price[] as prices of different pieces */
int cutRod(int price[], int n)
{
    int r[n+1],i,j,q;
    r[0]=0;

    // Build the table val[] in bottom up manner and return the last entry
   // from the table
    for(j=1;j<=n;j++)
    {
        q=INT_MIN;
        for(i=0;i<j;i++)
        {
            q = max(q, price[i]+r[j-i-1]);
        }
        r[j]=q;
    }
    return r[n];
}

int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %d\n", cutRod(arr, size));
    return 0;
}
