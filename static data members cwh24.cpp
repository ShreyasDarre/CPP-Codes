#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    int salary;
public:
    void setdata(void)
    {
        cout<<"Set Id then salary"<<endl;
        cin>>id;
        cin>>salary;
        count++;
    }

    void getdata(void)
    {
        cout<<"Employee with id "<<id<<" has a salary of "<<salary<<endl;
    }

    static void getcount(void)
    {
        cout<<"The Value of count is "<<count<<endl;
    }
};

int Employee :: count;



int main()
{
    Employee harry,rohan,lovish;

    harry.setdata();
    harry.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    lovish.setdata();
    lovish.getdata();
    Employee::getcount();
}
