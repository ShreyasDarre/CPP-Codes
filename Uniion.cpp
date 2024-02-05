#include<iostream>
using namespace std;

typedef union Employee//Called as named union
{
    int eid;//takes 4 bytes
    char favchar;//1 byte
    float salary;//4 byte
    //total of 9 bytes
}ep;//typedef into ep for simplicity

int main()
{
    //union Employee harry;//as i have typedef employee into ep, we can use this
    ep harry;
    /*
    *here union uses the largest space of memory block used and allots it to the variables 1 at a time
    so in the below example you we assign eid first
    then we assign favchar,eid is overwritten by favchar
    so when we print eid we get a garbage value
    */
    harry.eid = 1;
    harry.favchar = 'C';
    cout<<"Id is "<<harry.eid<<endl;
    cout<<"FavChar is "<<harry.favchar<<endl;

    // Here it uses only 4 bytes instead of 9 bytes, which is usually the case.
    harry.eid = 1;
    cout<<"Id is "<<harry.eid<<endl;
    harry.favchar = 'C';
    cout<<"FavChar is "<<harry.favchar<<endl;
    harry.salary = 34990;
    cout<<"Salary is "<<harry.salary<<endl;
}
