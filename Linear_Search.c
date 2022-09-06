#include<stdio.h>
int len,val;
int LinearSearch(int arr[])
{
    printf("Enter the Value:");
    scanf("%d",&val);    
    for(int i=0;i<len;i++){
        if(arr[i] == val){
            printf("\nPosition of Element: %d",i + 1);
        }
    }

}
int main()
{
    int arr[5];
    printf("\n Enter length of the Array:");
    scanf("%d",&len);
    printf("\n Enter the Element of the Array :");
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        scanf("\n %d",&arr[i]);
    }
    LinearSearch(arr);
    return 0;
}