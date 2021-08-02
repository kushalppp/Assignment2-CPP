#include<iostream>
using namespace std;

void roll(int );
void disp(void);
void dispp(void);
void fun(char); 

class car
{
 int price;
 public:
  void roll(int x)
{
price=x;
}
  void disp()
{
 cout<<"price"<<price;
}
};

class color : public car
{
char c;
public:
void fun(char x)
{
c=x;
}
 void dispp()
{
 cout<<"color"<<c;
}
};

 main()
{
color c1;
c1.fun('g');
c1.roll(3);
c1.disp();
c1.dispp();
}
