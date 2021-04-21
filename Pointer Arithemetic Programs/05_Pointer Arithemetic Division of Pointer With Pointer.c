#include<stdio.h>
#include<conio.h>
int main()
{
    int No1= 21, No2=50;

    int *Res = NULL;
    int *ptr1 = &No1;
    int *ptr2 = *No2;

    printf("\nBase Address of fist Variable is = %d",No1);
    printf("\nBase Address of Second Variable is = %d",No2);

    printf("\nValue in Pointers1 is = %d",ptr1);
    printf("\nValue in Pointers2 is = %d",ptr2);

    getch();

    Res = ptr2/ptr1;

    printf("\n\nValue of Pointer Variable is = %d",Res);


    getch();
    return 0;
}

