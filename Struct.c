#include<stdio.h>
struct Area
{
    int Length;
    int Breath;
};
int main()
{
    struct Area rect = {10,20};
    struct Area *prect = &rect;
    printf("\n length: %d",rect.Length);
    printf("\n Breath: %d",rect.Breath);
    printf("\n Area: %d",rect.Breath * rect.Length);
    printf("\n Area: %d",prect->Breath * prect->Length);

    struct Area *prect1;
    printf("\n Enter Length & Breath:");
    scanf("\n%d",&prect1->Length);
    printf("\n Enter Length & Breath:");
    scanf("\n%d",&prect1->Breath);
    printf("\n Area: %d",prect1->Breath * prect1->Length);
}
