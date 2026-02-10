#include<iostream.h>
#include<conio.h>
int main()
{
  int n, i, a[50],lar;
  clrscr();
  cout<<"Enter Number of Elements:";
  cin>>n;
  for(i=0;i<n;i++)
  {
    cout<<"Enter Elements:"<<i+1<<":";
    cin>>a[i];
  }
  lar=a[0];
  for(i=1;i<n;i++)
  {
   if(a[i]>lar)
   {
   lar=a[i];
   }
  }                                                                       S
  cout<<"Largest Element Of Array:"<<lar;
  getch();
  return 0;
}