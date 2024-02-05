#include<iostream>
#include<string>

using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void display(void);
    void ones_compliment(void);
};

void binary :: read(void)
{
    cout<<"Enter binary number."<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
    if(s.at(i)!='0' && s.at(i)!='1')
    {
        cout<<"Entered binary number is invalid."<<endl;
        exit(0);
    }
    }
}

void binary :: display(void)
{
    for(int i =0;i<s.length();i++)
    {
        cout<<s.at(i)<<endl;
    }
}

void binary :: ones_compliment(void)
{
        for(int i =0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            {
                s.at(i)= '1';
            }
            else if(s.at(i)=='1')
            {
                s.at(i)='0';
            }
        }
}



int  main()
{
    binary b;
    b.read();
    b.chk_bin();
    cout<<"Entered binary number is: "<<endl;
    b.display();
    b.ones_compliment();
    cout<<"Complement of the number is: "<<endl;
    b.display();
}
