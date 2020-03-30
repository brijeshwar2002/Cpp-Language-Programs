#include<iostream.h>
#include<conio.h>
class A
{
public:
virtual void show()=0;
A()
{
cout<<"I am A class contructor";
}
};

class B:public A
{
public:
void show()
{
cout<<"\n Overloading success!";
}
B()
{
cout<<"\nI am B class constructor";
}
};

void main()
{
clrscr();
A *h=new B();
h->show();
getch();
}