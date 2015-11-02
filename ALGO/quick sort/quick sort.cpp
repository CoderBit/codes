#include<iostream>
using namespace std;

int Partition(int ar[10],int low,int high)
{
    int pivot=ar[high]; // pivot
    int i=low-1;    // Index of smaller element (wall)
    for(int j=low;j<=high-1;j++)
    {
        // If current element is smaller than or equal to pivot
        if(ar[j]<=pivot)
        {
            i++;    // increment index of smaller element
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
    int temp=ar[high];
    ar[high]=ar[i+1];
    ar[i+1]=temp;
    return i+1;
}

/* arr[] --> Array to be sorted, low   --> Starting index, high  --> Ending index */
void quicksort(int ar[10],int low,int high)
{
    if(low<high)
    {
        int q=Partition(ar,low,high);
        quicksort(ar,low,q-1);
        quicksort(ar,q+1,high);
    }
}

int main()
{
    int n=10,ar[10]={11,4,3,5,2,12,55,9,7,71},i;
    quicksort(ar,0,n-1);
    for(i=0;i<10;i++)
        cout << ar[i] << " ";
    return 0;
}
