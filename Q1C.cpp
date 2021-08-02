#include<iostream>
using namespace std;

void roll(int );
void disp(void);
void dispp(void);
void fun(char); 
void gun(int);
void show(void);

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

class color : protected car
{
char c;
public:
void gun(int y)
{
roll(y);
}
void show()
{
disp();
}

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
c1.gun(3);
c1.show();
c1.dispp();
}
