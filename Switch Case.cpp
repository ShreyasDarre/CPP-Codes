#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    switch(age)
    {
    case 18:
        cout<<"Your age is 18 verified"<<endl;
        break;
    case 17:
        cout<<"Your under age limit you are 17"<<endl;
        break;
    default:
        cout<<"Not allowed for this bachelors party"<<endl;
        break;
    }
}
