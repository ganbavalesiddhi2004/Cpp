#include<iostream.h>
#include<conio.h>
int main()
{
  int n;
  clrscr();
  cout<<"Enter The number\n";
  cin>>n;
  if(n>0)
  {
   cout<<"Number Is Positive\n";
  }
  else if(n<0)
  {
   cout<<"Number Is Negative\n";
  }
  else
  {
   cout<< "Number is Equal To 0\n";
  }

  getch();
}


