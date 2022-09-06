#include<stdio.h>
int main()
{
    int a=10;
    void test(int ); //function declaration 
    test(a);      //function calling
    printf(" %4d ",a);
}
void test(int A) //function defination
{
    printf("\n test : ");   
    A*=A;
    printf(" %4d ",A);
    
}







