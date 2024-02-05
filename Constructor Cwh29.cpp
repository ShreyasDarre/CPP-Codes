#include<iostream>
using namespace std;

class Complex
{
    int a,b;

public:
    //create a constructor

    Complex(void);

    void printnumber()
    {
        cout<<"Your Number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};


Complex :: Complex(void)
{
    a = 10;
    b = 20;
    cout<<"Constructor called"<<endl;
}

int main()
{
    Complex c1;
    c1.printnumber();
    Complex c2;
    c2.printnumber();
    Complex c3;
    c3.printnumber();
}
