#include<iostream>
using namespace std;

//Base class
class Employee
{
public:
    int id;
    float salary=88.0;
    //Inheritance only takes place for the variables created and allocated value within the class
    //salary = 99.0;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }

    //Create a default constructor as the derived class will call it to inherit
    Employee(){}
};


/*

Syntax of the base class and the derived class is

class {{base class name}} : {{visibility mode}} {{derived class name}}
{
    class id/items/objects;
}

*/


class Programmer : public Employee
{
public:
    int languagecode;
    Programmer(int inpid)
    {
        id = inpid;
        languagecode = 69;

    }
};

int main()
{
    Employee harry(1),rohan(3);
    cout<<"Harry id is: "<<harry.id<<endl;
    cout<<"Harry salary is: "<<harry.salary<<endl;
    cout<<endl;
    cout<<"Rohan id is: "<<rohan.id<<endl;
    cout<<"Rohan salary is: "<<rohan.salary<<endl;
    cout<<endl;

    Programmer shreyas(19);
    cout<<"Shreyas id is: "<<shreyas.id<<endl;
    cout<<"Shreyas Languagecode is: "<<shreyas.languagecode<<endl;
    cout<<"Shreyas salary is: "<<shreyas.salary<<endl;
}
