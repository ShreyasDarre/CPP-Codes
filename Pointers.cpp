#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int *b = &a;
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Address of b is: "<<&b<<endl;
    cout<<"Address pointed by b is: "<<b<<endl;
    cout<<"Value at address pointed by b is: "<<*b<<endl;
}
