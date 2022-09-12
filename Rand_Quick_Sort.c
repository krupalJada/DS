#include<stdio.h>
#include<stdlib.h>
int B[100];
void Output(int arr[])
{
    for (int j = 0; j < 15; j++)
    {
        printf(" %d",arr[j]);
    }
}
void Quick_sort(int arr[],int First,int Last)
{
    int i,j,pivot,ele;
    if(First<Last)
    {
        pivot = First;
        i=First;
        j=Last;
        while(i<j)
        {
            while(arr[i] <= arr[pivot] && i<Last)
                i++;
            while(arr[j]>arr[pivot])
                j--;
            if(i<j){
                ele = arr[i];
                arr[i] = arr[j];
                arr[j] = ele;
            }
            ele = arr[pivot];
            arr[pivot] = arr[j];
            arr[j] = ele;
            Quick_sort(arr,First,j-1);
            Quick_sort(arr,j+1,Last);
        }
    }
}
void Particion(int A[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        Quick_sort(A,low,mid);
        Quick_sort(A,mid+1,high);
    }
}
int main()
{
    int A[20],min=20,max=100,val,n=15;
    for(int i=0; i<n; i++)
        A[i] = (rand()%(max-min+1)+min);
    printf("\nBefore Sorting:");
    Output(A);
    Particion(A,0,n-1);
    printf("\nAfter Sorting:");
    Output(A);
    return 0;
}