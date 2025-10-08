#include<iostream.h>
#include<conio.h>
int main()
{
 int num;
 clrscr();
 cout<<"Enter The Number";
 cin>>num;
 if(num%3==0 && num%7==0)
 {
  //if(num%7==0)
  {
    cout<<"Number is multipy By 3 and 7 ";
  }
 }
 else
 {
  cout<<"Please Enter Valid Number";
 }
 getch();
}