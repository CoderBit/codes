#include<iostream>
using namespace std;

int Partition(int ar[10],int low,int high)
{
    int pivot=ar[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(ar[j]<=pivot)
        {
            i++;
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
