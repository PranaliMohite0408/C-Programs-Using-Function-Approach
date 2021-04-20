///Accepting Nothing Returns Something///

#include<stdio.h>
#include<conio.h>
 int Add();

 int main()
 {
     int Sum=0;
     Sum = Add();
     printf("\nAddition is %d",Sum);
     getch();
     return 0;
 }

 int Add()
 {
     int No1=0,No2=0,Sum=0;
     printf("\nEnter Two Numbers for Addition=>");
     scanf("%d%d",&No1,&No2);

     Sum = No1+No2;
     return Sum;
 }
