#include<stdio.h>
#define n 10
int ele,i,j;
void Output(int arr[])
{
    for (int j = 0; j < 10; j++)
    {
        printf(" %d", arr[j]);
    }
}
void Bubble_sort(int arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                ele = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ele;
            }
        }
    }
    printf("\n Bubble_sort:");
    Output(arr);
}
void Merge(int a[],int b[])
{
    int c[10];
    for(int i = 0; i < 5; i++)
       c[i] = a[i];
    for(int i = 0; i < 5; i++)     
        c[i + 5] = b[i];
    printf("\nBefore Sorting:");
    Output(c);
    printf("\nAfter Sorting:");
    Bubble_sort(c);
}
int main()
{
    int a[] = {11,22,43,24,65},b[] = {16,27,48,39,110};
    Merge(a,b);
    return 0;      
}