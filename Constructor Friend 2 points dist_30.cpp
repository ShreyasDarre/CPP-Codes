#include<iostream>
#include<math.h>
using namespace std;

class Point
{
    int x,y;
    friend void Distance(Point,Point);
public:
    Point(int ,int); //constructor declaration

    void displayPoint()
    {
        cout<<"You have selected point at ("<<x<<" , "<<y<<")"<<endl;
    }
};

void Distance(Point o1,Point o2)
{
    int diff1=0,diff2=0,diff;
    diff1 = abs(o1.x-o2.x);
    diff2 = abs(o1.y-o2.y);
    diff = diff1*diff1 + diff2*diff2;
    diff = sqrt(abs(diff));
    cout<<"The distance is "<<diff<<" units."<<endl;
}


Point :: Point(int a,int b)
{
    x = a;
    y = b;
}

int main()
{
    Point p1 = Point(4,5);
    Point p2 = Point(2,5);
    p1.displayPoint();
    p2.displayPoint();
    Distance(p1,p2);
}
