#include<iostream>
using namespace std;

class A
{
int x;
public:
 void fun(int y)
{
x=y;
cout<<"x="<<x;
}
};

class B : public A
{
int y;
public:
void funn(int z)
{
y=z;
cout<<"y="<<y;
}
};

class C : public B
{
int q;
public:
void foo(int e)
{
q=e;
cout<<"q="<<q;
}

};

main()
{
C n1;
n1.fun(2);
n1.funn(3);
n1.foo(4);
}

OUTPUT:-
x=2y=3q=4