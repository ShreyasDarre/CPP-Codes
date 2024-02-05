#include<iostream>  //global header file
//#include "this.h" //user defined header file.. file should exist in directory

using namespace std;

int main()
{
    int a=4,b=5;

    //Airthmetic operators
    cout<<"The result of a+b is "<<(a+b)<<endl;
    cout<<"The result of a-b is "<<(a-b)<<endl;
    cout<<"The result of a*b is "<<(a*b)<<endl;
    cout<<"The result of a/b is "<<(a/b)<<endl;
    cout<<"The result of a%b is "<<(a%b)<<endl;
    cout<<"The result of a++ is "<<(a++)<<endl;
    cout<<"The result of a-- is "<<(a--)<<endl;
    cout<<"The result of ++a is "<<(++a)<<endl;
    cout<<"The result of --a is "<<(--a)<<endl;

    //Assignment operators
    /*
    int a=5;
    float b=6.0;
    char c = 'd';*/

    //Comparision Operators

    cout<<"The result of logical and operator of (a==b) && (a<b) is "<<((a==b) && (a<b))<<endl;
    cout<<"The result of logical and operator of (a==b) || (a<b) is "<<((a==b) || (a<b))<<endl;
    cout<<"The result of logical and operator of (!(a==b))is "<<(!(a==b))<<endl;
}
