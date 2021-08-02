#include<iostream>
using namespace std;

class complex
{
private :
int a,b,c;
 public:
  complex(int x,int y)
{
a=x;
b=y;
cout<<endl<<"1st constructor";
}
complex(int k)
{ c=k;
cout<<endl<<"2nd constructor";
}

complex()
{
cout<<endl<<"3rd constructor";
}

~complex()
{
cout<<endl<<"destructor 1";
}

};

main()
{
complex obj1(3,4),obj2(5),obj;
}

OUTPUT:-
1st constructor
2nd constructor
3rd constructor
destructor 1
destructor 1
destructor 1


