#include<iostream>
#include<cmath>
using namespace std;

class simple
{
protected:
    int num1,num2;
    int sum,sub,prod;
    float div;
public:
    void set_info_sim(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void process_sim(void)
    {
        sum = num1 + num2;
        sub = num1 - num2;
        prod = num1 * num2;
        if(num2!=0)
        {
            div=(float)num1/num2;
        }
        else
        {
            div =0;
        }
    }

    void display_sim(void)
    {
        cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
        cout<<num1<<" - "<<num2<<" = "<<sub<<endl;
        cout<<num1<<" * "<<num2<<" = "<<prod<<endl;
        cout<<num1<<" / "<<num2<<" = "<<div<<endl;
    }
};

class scientific
{
protected:
    int num3,num4;
    float sqr3,sqr4;
    float cube3,cube4;
    float sqrt3,sqrt4;
    float cbrt3,cbrt4;
public:
    void set_info_sci(int a, int b)
    {
        num3 = a;
        num4 = b;
    }
    void process_sci(void)
    {
        sqr3 = num3*num3;
        sqr4 = num4*num4;
        cube3 = num3*num3*num3;
        cube4 = num4*num4*num4;
        sqrt3 = sqrt(num3);
        sqrt4 = sqrt(num4);
        cbrt3 = cbrt(num3);
        cbrt4 = cbrt(num4);
    }

    void display_sci(void)
    {
        cout<<"The square of "<<num3<<" is "<<sqr3<<endl;
        cout<<"The square of "<<num4<<" is "<<sqr4<<endl;
        cout<<"The cube of "<<num3<<" is "<<cube3<<endl;
        cout<<"The cube of "<<num4<<" is "<<cube4<<endl;
        cout<<"The square root of "<<num3<<" is "<<sqrt3<<endl;
        cout<<"The square root of "<<num4<<" is "<<sqrt4<<endl;
        cout<<"The cube root of "<<num4<<" is "<<cbrt4<<endl;
        cout<<"The cube root of "<<num4<<" is "<<cbrt4<<endl;
    }
};

class hybrid : public simple, public scientific
{
public:
    void setinfo(int a,int b)
    {
        set_info_sim(a,b);
        set_info_sci(a,b);
    }
    void process(void)
    {
        process_sim();
        process_sci();
    }
    void display(void)
    {
        display_sim();
        display_sci();
    }
};

int main()
{
    int a,b;
    cout<<"Enter 1st number:"<<endl;
    cin>>a;
    cout<<"Enter 2nd number:"<<endl;
    cin>>b;

    hybrid Casio;
    Casio.setinfo(a,b);
    Casio.process();
    Casio.display();
}
