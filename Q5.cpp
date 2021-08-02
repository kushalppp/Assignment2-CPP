#include<iostream>
using namespace std;
 
int area(void);
int areaa(void);

class shape
{
 int height,width;
 public:
   int r,t;
    shape(int x=4,int y=8)
    {   r=x;
        t=y;
       height=x;
       width=y;
    }
};

class T : private shape
{
public:
int area()
    {
    int a;
    a=(r*t)/2;
    return(a);
    }
};

class R : private shape
{
public:
int areaa()
      {
     int a;
     a=r*t;
     return(a);
      }
};

main()
{
class T s1;
class R a1;
int tria=s1.area();
int rectan=a1.areaa();
cout<<"Triangle area ="<<tria<<endl;
cout<<"Rectangle area ="<<rectan<<endl;
}

OUTPUT:-
Triangle area =16
Rectangle area =32

