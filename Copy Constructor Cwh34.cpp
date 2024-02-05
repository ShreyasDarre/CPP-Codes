#include<iostream>
using namespace std;

class Number{

int a;
public:
    Number()
    {
        a = 0;  //Default constructor creation
    }

    Number(int num) //Creating a constructor
    {
        a = num;
    }

    Number(Number &obj) //Creating a copy constructor
    {
        cout<<"Copy Constructor Called...!!"<<endl;
        a = obj.a;
    }

    void display()
    {
        cout<<"The number is: "<<a<<endl;
    }
};

int main()
{
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    cout<<endl;
    Number z1(z); //copy constructor called
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z;  //copy constructor called
    z3.display();

    //z1 should exactly resemble z or x or y

    return 0;
}
