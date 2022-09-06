#include<stdio.h>
int recur(int n)
{
    printf("\n\t Start bulb %d", n);
    if(n<3)
        recur(n+1);    
    printf("\n\t exit from %d",n);
    
}
int main()
{
    printf("\n Before main");
    recur(1);
    printf("\n After main");
}