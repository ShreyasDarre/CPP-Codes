#include<iostream>
#include<string>

using namespace std;

class garage
{
public:
    int numberofcars;
    string brand;
    string model;
    int price;
    void details()
    {
        cout<<brand<<endl;
        cout<<model<<endl;
        cout<<price<<endl;
    }
}shreyas,nandu;

int main()
{
    shreyas.brand = "BMW";
    shreyas.model = "X3";
    shreyas.price = 199800;
    cout<<"Enter brand,model and price in respective format"<<endl;
    cin>>nandu.brand;
    cin>>nandu.model;
    cin>>nandu.price;

    shreyas.details();
    nandu.details();
}

