#include<stdio.h>
#include<stdlib.h>
int B[100];
void Output(int arr[])
{
    for (int j = 0; j < 15; j++)
    {
        printf("\n %d = %d",j,arr[j]);
    }
}
void Merge(int A[],int low,int mid,int high)
{
    int i=low,j=mid+1,k=low;
    while (i<=mid && j<=high)
    {
        if(A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    while(i<=mid)
        B[k++] = A[i++];
    while(j<=mid)
        B[k++] = A[j++];
    for(i=low;i<=high;i++){
        A[i] = B[i];
        printf("\n i = %d",i);
    }
}
void MergeSort(int A[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}
int main()
{
    int A[20],min=20,max=100,val,n=15;
    for(int i=0; i<15; i++)
        A[i] = (rand()%(max-min+1)+min);
    MergeSort(A,0,n-1);
    // Output(A);
    return 0;
}