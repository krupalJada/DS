//f = front
//r = rear
#include <stdio.h>
int f = 0, r = 0, Que[10], len, i;
void Insert(int ele)
{
    if ((r + 1) == len)
        printf("\nQue is Full");
    else
    {
        r = (r + 1) % len;
        Que[r] = ele;
    }
    printf("\n Front: %d", f);
    printf("\n Rear: %d", r);
    printf("\n");
}
void Delete()
{
    printf("\nin delete..........");
    if (f == r)
    {
        printf("Queue Is Empty");
        f = r = 0;
    }
    else
    {
        printf("\n Delete Element %d", Que[(f + 1) % len]);
        f = (f + 1) % len;
    }
    printf("\n Front: %d", f);
    printf("\n Rear: %d", r);
    printf("\n");
}
void output()
{
        printf("\n");
        if(f == r){
            printf("\nQue is Empty");
        }else{
            i = f + 1;
            do
            {
                printf(" %d",Que[i]);
                i = ((i+1)%len);        
            }while (i != (r + 1)%len);
            }
        printf("\n Front: %d", f);
        printf("\n Rear: %d", r);
        printf("\n");
}
int main()
{
    int choice, ele;
    printf("\nEnter The Length Of Que:");
    scanf("%d", &len);
    do
    {
        printf("\nPress 1 for => Insert In Queue");
        printf("\nPress 2 for => Delete In Queue");
        printf("\nPress 3 for => Display the Queue");
        printf("\nPress 0 for => Exit");
        printf("\nEnter the Choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the Value :");
            scanf("%d", &ele);
            Insert(ele);
            break;
        case 2:
            Delete();
            break;
        case 3:
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