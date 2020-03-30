#include<iostream.h>
#include<conio.h>
class sum
{
int a,b;
public:
sum()
{
cout<<"\n Please pass some values";
}
sum(int x ,int y)
{
a=x;
b=y;
cout<<"\n Parameterised sum is:"<<a+b;
}
sum(sum & s)
{
a=s.a;
b=s.b;
cout<<"\n copy sum is:"<<a+b;
}
};
void main()
{
clrscr();
new sum();
sum *s=new sum(12,23);
new sum(*s);
getch();
}