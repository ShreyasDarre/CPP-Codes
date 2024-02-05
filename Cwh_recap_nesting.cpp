#include<iostream>
using namespace std;

class binary
{
    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
}b;

void binary :: read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
    }
}

void binary :: display(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            cout<<s.at(i);
        }
        if(s.at(i)=='1')
        {
            cout<<s.at(i);
        }
    }
    cout<<endl;
}

int main()
{
    b.read();
    b.chk_bin();
    cout<<"Binary input is: "<<endl;
    b.display();
    b.ones_compliment();
    cout<<"Complimented form is: "<<endl;
    b.display();
}
