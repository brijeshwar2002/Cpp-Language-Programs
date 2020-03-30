#include<iostream.h>
#include<conio.h>
class A
{
public:
virtual void sum(int a,int b)=0;
virtual void sub(int a,int b)=0;
virtual void mul(int a,int b)=0;
virtual void div(float a,float b)=0;
A()
{
cout<<"CALCULATE";
}
};

class B:public A
{
int a,b;
public:
void sum(int a,int b)
{
cout<<"\n Sum is:"<<a+b;
}
void sub(int a,int b)
{
cout<<"\n Substraction is:"<<a-b;
}
void mul(int a,int b)
{
cout<<"\n Multiplication is:"<<a*b;
}
void div(float a,float b)
{
cout<<"\n Division is:"<<a/b;
}
};

void main()
{
clrscr();
A *h=new B();
h->sum(23,56);
h->sub(88,45);
h->mul(56,89);
h->div(12.3f,34.5f);
getch();
}