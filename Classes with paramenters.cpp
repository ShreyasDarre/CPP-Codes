#include<iostream>
#include<string>

using namespace std;

class car
{
public:
    int speed(int maxspeed)
    {
        cout << "Safe speed is: " << (maxspeed / 2) << endl;
    }

    void showInfo() // Public member function to access private members
    {
        cout << "Owner: " << owner << endl;
        cout << "Mileage: " << mileage << endl;
    }

private:
    string owner = "Hypnos";
    int mileage = 19;
} shreyas;

int main()
{
    shreyas.speed(200);
    shreyas.showInfo(); // Call the public member function to access private members
}
