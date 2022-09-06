#include <stdio.h>
int Que[5], len, f = -1, r = -1,i; // f = front ele, r = rear/Back ele
void FrontInsert(int ele)
{
    if(0 < f){
        Que[--f] = ele;
    }else{
        printf("\nFront Insert Is Not Possible");
    }

    printf("\nfront : %d", f);
    printf("\nrear : %d", r);
    printf("\n");
}
void FrontDelete()
{
    if (f == -1 && r == -1)
    {
        printf("\nArray is Empty");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
    printf("\nfront : %d", f);
    printf("\nrear : %d", r);
    printf("\n");    
}
void RearInsert(int ele)
{
    if (r + 1 == len)
    {
        printf("\nQue Is Full");
    }
    else if (f == -1 && r == -1)
    {
        Que[++f] = ele;
        Que[++r] = ele;
    }
    else
    {
        Que[++r] = ele;
    }
    printf("\nfront : %d", f);
    printf("\nrear : %d", r);
    printf("\n");
}
void RearDelete()
{
    if (f == -1 && r == -1)
    {
        printf("\nArray is Empty");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
    printf("\nfront : %d", f);
    printf("\nrear : %d", r);
    printf("\n");
}
void output()
{
   if(f != -1){
        printf("\n");
        i=f;
        while (i <= r)
        {
            printf(" %d",Que[i]);
            i++;
        }
    }
}
int main()
{
    int choice, ele;
    printf("\nEnter the Length of Array:");
    scanf("%d", &len);
    do
    {
        printf("\nPress 1 for => Front Insert in Queue");
        printf("\nPress 2 for => Front Delete In Queue");
        printf("\nPress 3 for => Rear Insert In Queue");
        printf("\nPress 4 for => Rear Delete in Queue");
        printf("\nPress 5 for => Display the Queue");
        printf("\nPress 0 for => Exit");
        printf("\nEnter the Choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:            
                printf("\nEnter the Value :");
                scanf("%d", &ele);
                FrontInsert(ele);
                break;
           
        case 2:
            FrontDelete();
            break;
        case 3:            
            printf("\nEnter the Value :");
            scanf("%d", &ele);
            RearInsert(ele);
            break;
        case 4:
            RearDelete();
            break;
        case 5:
            output();
            break;
        case 0:
            break;
        default:
            printf("\nWrong Choice");
            break;
        }

    } while (choice != 0);
}