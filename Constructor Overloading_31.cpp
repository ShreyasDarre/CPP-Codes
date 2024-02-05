#include<iostream>
using namespace std;

class Complex
{
    int a,b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x,int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printnumber()
    {
        cout<<"The number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    Complex c1(4,6);
    Complex c2(5);
    Complex c3;

    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}
