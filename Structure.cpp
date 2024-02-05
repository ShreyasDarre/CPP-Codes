#include<iostream>
using namespace std;

typedef struct Employee//Called as named structure
{
    int eid;
    char favchar;
    float salary;
}ep;//typedef into ep for simplicity

int main()
{
    //struct Employee harry;//as i have typedef employee into ep, we can use this
    ep harry;
    harry.eid = 1;
    harry.favchar = 'C';
    harry.salary = 34990;

    cout<<"Id is "<<harry.eid<<endl;
    cout<<"FavChar is "<<harry.favchar<<endl;
    cout<<"Salary is "<<harry.salary<<endl;
}
