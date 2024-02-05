#include<iostream>
using namespace std;


class Base1
{
public:
    void greet()
    {
        cout<<"Hello fam"<<endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout<<"Hello guys it's me"<<endl;
    }
};

class derived : public Base1,public Base2
{
    int a;
public:
    void greet()
    {
        Base2::greet(); //When derived greet then we use scope resolution operator
    }
};

class B{
public:
    void say()
    {
        cout<<"HelloWorld"<<endl;
    }
};

class D : public B
{
    int a;
public:
    void say()
    {
        cout<<"Hello"<<endl;
    }
};

int main()
{
    //Ambiguity 1
    Base1 b1obj;
    Base2 b2obj;
    b1obj.greet();
    b2obj.greet();

    derived der;
    der.greet();

    B b;
    b.say();

    D d;
    d.say();
}
