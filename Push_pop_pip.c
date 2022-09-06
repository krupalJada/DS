#include<stdio.h>
#define n 5
int top= -1,stack[5];
void push(int val){
    if(top > n - 1)
        printf("\n Stack is Owerflow");
    else
        stack[++top] = val;
}
void pop(){
    int x;
    if(top <= -1)
        printf("\n Stack is Empty");
    else{
        x = stack[top--];
        printf("\n Deleted Element: %d",x);
    }
        printf("\n");
}
int pip(int val){
    int i = 0;
    while(i <= top){
        if(stack[i] == val){
            printf("Position of value: %d",i + 1);
            return 0;
        }
        i++;
    }
}
void output(){
    int i = 0;
    while(i <= top){
        printf(" %d",stack[i]);
        i++;
    }
}
int main(){
    int ch,val;
    do
    {
    printf("\npress --> 1 for Push, \npress --> 2 for Pop, \npress --> 3 for Show,\npress --> 4 for pip, \npress --> 0 for Exit");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
        switch (ch)
        {
            case 1: 
                printf("\n Enter Value:");
                scanf("%d",&val);
                push(val);
                break;
            case 2: 
                pop();
                break;
            case 3: 
                output();
                break;
            case 4:
                printf("\n Enter Value:");
                scanf("%d", &val);
                pip(val);
                break;
            case 0:                
                break;
            default:
                printf("\n Wrong Choice");
                break;
        }
    } while (ch != 0);
    
}