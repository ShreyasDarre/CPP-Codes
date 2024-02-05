#include<iostream>

using namespace std;
//forward decleration
//defining that there is a complex class ahead
class complex;

class calculator
{
public:
    int add(int a,int b)
    {
        return(a+b);
    }

    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a,b;

    //defining a friend function to give access to class calculator to objects of this class
    //Individual declaration
    //friend class calculator :: sumrealcomplex(complex, complex);
    //friend class calculator :: sumcompcomplex(complex, complex);

    //Instead Declare entire class as a friend

    friend class calculator;

public:
    void setnumber(int n1,int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int calculator :: sumrealcomplex(complex o1, complex o2)
{
    return(o1.a + o2.a);
}

int calculator :: sumcompcomplex(complex o1, complex o2)
{
    return(o1.b + o2.b);
}

int main()
{
    complex o1,o2;
    o1.setnumber(1,4);
    o1.printnumber();
    o2.setnumber(3,4);
    o2.printnumber();
    calculator calc;
    int res = calc.sumrealcomplex(o1,o2);
    cout<<res<<endl;
    int resc = calc.sumcompcomplex(o1,o2);
    cout<<resc<<"i"<<endl;
}
