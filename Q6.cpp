#include<iostream>
using namespace std;

class mother
{
public:
void display()
{
cout<<"This is mother class";
}
};

class daughter : public mother
{
public:
 void show()
{
 cout<<endl<<"This is daughter class";
}
};

main()
{
daughter D1;
D1.display();
D1.show();
}

OUTPUT:-
This is mother class
This is daughter class