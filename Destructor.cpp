#include<iostream>
using namespace std;

//Destructor never takes argument nor gives any return value.
/*
    Destructor is used to free the memory consumed by the constructor
    Generally when a block is created.. then the constructors created within the block are removed using destructor when exiting the block.
    But the constructor called within the main function is only removed when exiting the main function using return command
*/

int count =0;
class num{
public:
    num()
    {
        count++;
        cout<<"Constructor is called for object "<<count<<endl;
    }
    ~num()
    {
        cout<<"Destructor is called for object "<<count<<endl;
        count--;
    }
};


int main()
{
    cout<<"We are inside main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    //creating a block
    {
        cout<<"Entering Block"<<endl;
        cout<<"Creating 2 more objects"<<endl;
        num n2, n3;
        cout<<"Exiting Block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}
