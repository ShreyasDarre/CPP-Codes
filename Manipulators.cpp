#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a=3,b=34,c=244,d=1255;

    cout<<"Value of a without manipulator is "<<a<<endl;
    cout<<"Value of b without manipulator is "<<b<<endl;
    cout<<"Value of c without manipulator is "<<c<<endl;
    cout<<"Value of d without manipulator is "<<d<<endl;
    cout<<"Value of a without manipulator is "<<setw(4)<<a<<endl;
    cout<<"Value of b without manipulator is "<<setw(4)<<b<<endl;
    cout<<"Value of c without manipulator is "<<setw(4)<<c<<endl;
    cout<<"Value of d without manipulator is "<<setw(4)<<d<<endl;
}
