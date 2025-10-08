#include<iostream.h>
#include<conio.h>
int main()
{
 int num;
 clrscr();
 cout<<"Enter the Marks of subject";
 cin>>num;
  if(num>=90)
  {
   cout<<"Student Are get A Grade";
  }
  else if(num>=80)
  {
   cout<<"Student Are get B Grade";
  }
  else if(num>=70)
  {
  cout<<"Student Are Get C Grade";
  }
  else
  {
   cout<<"Student Are Fail";
   }
 getch();
}