#include<iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
public:
    void set_no(int a)
    {
        roll_no = a;
    }
    void display_no(void)
    {
        cout<<"The roll number of student is: "<<roll_no<<endl;
    }
};

class Test : public virtual Student
{
protected:
    float maths,physics;
public:
    void set_marks(float m1,float m2)
    {
        maths = m1;
        physics = m2;
    }
    void display_marks(void)
    {
        cout<<"The student with roll number: "<<roll_no<<" has attained: "<<maths<<" marks in maths and "<<physics<<" in physics"<<endl;
    }
};

class Sports : public virtual Student
{
protected:
    float score;
public:
    void set_score(float sc)
    {
        score = sc;
    }
    void display_score(void)
    {
        cout<<"The student with roll number "<<roll_no<<" has attained: "<<score<<" in PT"<<endl;
    }
};

class Result : public Sports, public Test
{
private:
    float Result;
public:
    void show_result(void)
    {
        Result = physics + maths + score;
        display_no();
        display_marks();
        display_score();
        cout<<"The result is: "<<Result<<endl;
    }
};

int main()
{
    Result shreyas;
    shreyas.set_no(789);
    shreyas.set_marks(55.1,44.0);
    shreyas.set_score(9);
    shreyas.show_result();
}
