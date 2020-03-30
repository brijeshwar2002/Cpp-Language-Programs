#include<iostream.h>
#include<conio.h>
class A
{
int a,b;
public:
void input(int a, int b)
{
this->a=a;
this->b=b;
}
void operator+(A x)
{
x.a=x.a+a;
x.b=x.b+b;
cout<<"a:"<<x.a;
cout<<"\nb:"<<x.b;
}
void operator-(A x)
{
x.a=x.a-a;
x.b=x.b-b;
cout<<"\n a:"<<x.a;
cout<<"\n b:"<<x.b;
}
};

int main()
{
clrscr();
A b,c;
b.input(4,4);
c.input(3,3);
b-c;

getch();
}