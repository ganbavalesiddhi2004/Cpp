#include<iostream.h>
#include<conio.h>
int main()
{
  int n,i;
  int a[50],sum=0,avg=0;
  clrscr();
  cout<<"Enter Number of Elements:\n";
  cin>>n;
  cout<<"Enter the Number of Elements:\n";
  for(i=0;i<n;i++)
  {
    cout<<"Elements"<<i+1<<":";
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    sum+=a[i];
  }
  avg=sum/n;
  cout<<"Sum of Elements:"<<sum<<"\n";
  cout<<"Average of Elements:"<<avg<<"\n";
  getch();
  return 0;
}
