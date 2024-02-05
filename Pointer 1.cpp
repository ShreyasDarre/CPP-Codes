#include<iostream>

using namespace std;

int main()
{
    int a=6;
    int *b=&a;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The Value of the address by pointer b is "<<*b<<endl;

    int **c=&b;
    cout<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of c is "<<c<<endl;
    cout<<"The value of value_at(c) is "<<*c<<endl;
    cout<<"The value of value_at(value_at(c)) is "<<**c<<endl;
}
