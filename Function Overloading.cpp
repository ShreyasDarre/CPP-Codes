#include<iostream>
using namespace std;

int add(int a,int b)
{
    cout<<"Using 2 argument function."<<endl;
    return a+b;
}

int add(int a, int b , int c)
{
    cout<<"Using 3 argument function."<<endl;
    return a+b+c;
}

int volume(double r,int h)
{
    return (3./14*r*h);
}

int volume(int a)
{
    return (a*a*a);
}

int volume(int l, int b, int h)
{
    return l*b*h;
}

int main()
{

    cout<<"Sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"Sum of 3 and 6 and 9 is "<<add(3,6,9)<<endl;

    cout<<"Volume of cube is "<<volume(3)<<endl;
    cout<<"Volume of cylinder is "<<volume(3,6)<<endl;
    cout<<"Volume of rectangular cuboid is "<<volume(3,6,9)<<endl;
}

/*
Function overloading is a polymorphism process which is used,
where based on the number of arguments different same named function can be used..

For example here we have used 2 add function which have 2 and 3 arguments respectively.. and the functions are also based on number of inputs..
*/
