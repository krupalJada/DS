#include<stdio.h>
#include<stdlib.h>
#define n 10
void Output(int arr[])
{
    for(int i=0;i<n;i++)
        printf(" %d",arr[i]);
}
void Quick_sort(int arr[],int First,int Last)
{
    int i,j,pivot,ele;
    if(First<Last)
    {
        printf("\n Incide Quick:");
        Output(arr);
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
int main()
{
    int i,arr[25],min=20,max=101;
    // printf("\n Howmany Element you have:");
    // scanf(" %d",&n);
    for(int i=0;i<n;i++)
        arr[i] = (rand()%(max-min+1)+min);
    printf("\n Random Array:");
    Output(arr);
    Quick_sort(arr,0,n-1);
    printf("\n Order of Sorted El:");
    for(int i=0;i<n;i++)
        printf(" %d",arr[i]);
    return 0;
}