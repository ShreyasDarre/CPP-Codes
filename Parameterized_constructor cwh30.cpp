#include<iostream>

using namespace std;

class complexion{
int a,b;

public:
    complexion(int ,int);

    void print()
    {
        cout<<"Your number is "<<a<<" + "<<"i"<<b<<endl;
    }
};

complexion :: complexion(int x,int y)
{
    a = x;
    b = y;
}

int main()
{
    complexion a(4,6);
    complexion b = complexion(5,6);

    a.print();
    b.print();
}
