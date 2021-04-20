#include<stdio.h>
#include<conio.h>
void Check_Even_Odd(int);

int main()
{
    int Num=0;
    printf("\nEnter an Integer Number=>");
    scanf("%d",&Num);

    Check_Even_Odd(Num);

    printf("\nThanks!!");
    getch();
    return 0;

}

void Chek_Even_Odd(int Num)
{
      if(Num==0)
      {
        printf("\n Given number is Neutral");
      }
      else if(Num%2==0)
      {
        printf("\n Given number is Even");
      }
      else
      {
       printf("\n Given number is Odd");
      }
      return;
}
