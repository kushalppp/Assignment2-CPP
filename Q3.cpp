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

class B 
{
int y;
public:
void funn(int z)
{
y=z;
cout<<"y="<<y;
}
};

class C : public A, public B
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
n1.fun(4);
n1.funn(6);
n1.foo(8);
}
OUTPUT:-
x=4y=6q=8

