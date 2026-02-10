#include<iostream.h>
#include<conio.h>
int main()
{
 int a[5]={5,2,9,1,3};
 clrscr();
 for(int i=0;i<5;i++)
 {
   for(int j=0;j<4-i;j++)
   {
     if(a[j]>a[j+1])
     {
      int temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
     }
   }
 }
 cout<<"Sorted Arrary ascending order:";
 for(i=0;i<5;i++)
 {
  cout<<a[i]<<" ";
 }
 getch();
 return 0;
}
