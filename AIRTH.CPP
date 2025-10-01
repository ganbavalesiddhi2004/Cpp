#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int a,b,add,sub,mul,div,mod;
 cout<<"\nArithmatic Operations\n";
 cout<<"Enter First Numbers";
 cin>>a;
 cout<<"Enter Second Number";
 cin>>b;
 add=a+b;
 sub=a-b;
 mul=a*b;
 div=a/b;
 mod=a%b;

 cout<<"\nAddition Of Two Numbers\n"<<add;
 cout<<"\nSubtraction Of Two Numbers\n"<<sub;
 cout<<"\nMultification Of Two Numbers\n"<<mul;
 cout<<"\nDivision Of Two Numbers\n"<<div;
 cout<<"\nModulus of Two Numbers\n"<<mod;
 getch();
}