#include<stdio.h>
#include<string.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}


int main()
{
    int T,B,G,BH[10000],GH[10000],i,flag=0;
    scanf("%d",&T);
    while(T--)
    {
    	//flag=0;
        scanf("%d %d",&B,&G);
        for(i=0;i<B;i++)
          	scanf("%d",&BH[i]);
	    for(i=0;i<G;i++)
	        scanf("%d",&GH[i]);
        if(G<B)
            flag=-1;
        else
        {
            mergeSort(BH,0,B-1);
            mergeSort(GH,0,G-1);
            for(i=0;i<B;i++)
            {
                if(BH[i]<=GH[i])
                {
                    flag=-1;
                	break;
                }
            }
        }
        if(flag==-1)
        {
        	printf("\nNO");
            flag=0;
        }
        else
            printf("\nYES");
    }
    return 0;
}
