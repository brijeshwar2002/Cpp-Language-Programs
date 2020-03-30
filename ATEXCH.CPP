#include<iostream.h>
#include<conio.h>
#inlucde<exception.h>
void main()
{
clrscr();
int a;

cout<<"\n Enter a value: ";
cin>>a;

try
{
if(a==0)
{
throw a;
}
cout<<"\n Division is: "<<10/a;
}

catch(int a)
{
cout<<"\n 0 is not allowed \n";
}

getch();
}