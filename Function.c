/*<return type> function-name(arg1,.....,.,.,.) //defination 
{
    statements
}
function-name(param,.,.,.,.) //calling 

return   param
1       1
1       0
0       1
0       0*/
//user define function (UDF)
//by system     in-built function

#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    void test(int []); //function declaration 
    test(a);      //function calling
    printf("\nmain :");
    for(int i=0;i<5;i++)
        printf(" %4d ",a[i]);
}
void test(int arr[]) //function defination
{
    printf("\n test : ");
    for(int i=0;i<5;i++)
    {
        arr[i]*=arr[i];
        printf(" %4d ",arr[i]);
    }
}







