#include<stdio.h>
#include<stdio.h>
int main()
{
    int No = 15;
    int *iptr = &No;
    void *vptr = &No;

    printf("\nAddress of No :%d",No);
    printf("\nAddess of iptr : %d",&iptr);
    printf("\n Value in iptr : %d",iptr);
    printf("\nvalue of No : %d",No);
    printf("\nValue in No By Pointer : %d",*iptr);
    printf("\nAddress of vptr : %d",&vptr);
    printf("\nValue in vptr : %d",vptr);
    printf("\nvalue of No by void pointer : %d",*vptr);

    getch();
    return 0;
}
