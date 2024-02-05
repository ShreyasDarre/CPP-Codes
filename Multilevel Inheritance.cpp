#include<iostream>
using namespace std;
/*

 If we are inheriting B from A and C is inherited from B : [A--->B--->C]
 1. A is Base class of B and B is base class of C
 2. A--->B--->C is called the inheritance path..(ABC)


*/
class Student
{
protected:
    int roll_no;
public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Student :: set_roll_no(int r)
{
    roll_no =r;
}

void Student :: get_roll_no()
{
    cout<<"Roll number is: "<<roll_no<<endl;
}

class Marks : public Student
{
protected:
    float physics;
    float maths;
public:
    void set_marks(float,float);
    void get_marks(void);
};

void Marks :: set_marks(float m1, float m2)
{
    physics = m1;
    maths = m2;
}

void Marks :: get_marks()
{
    cout<<"The marks obtained in physics are "<<physics<<" and marks obtained in maths are "<<maths<<endl;
}

class Result : public Marks
{
protected:
    float percentage;
public:
    void display_result(void)
    {
        get_roll_no();
        get_marks();
        cout<<"The percentage of marks obtained is : "<<(physics+maths)/2<<"%"<<endl;
    }
};


int main()
{
    Result Shreyas;
    Shreyas.set_roll_no(320);
    Shreyas.set_marks(9.0,6.0);
    Shreyas.display_result();
}
