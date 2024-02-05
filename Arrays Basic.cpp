#include<iostream>

using namespace std;

int main()
{
    /*
    int arr[] = {10,20,30,40};
    cout<<"The number in arr is "<<arr[0]<<endl;
    cout<<"The number in arr is "<<arr[1]<<endl;
    cout<<"The number in arr is "<<arr[2]<<endl;
    cout<<"The number in arr is "<<arr[3]<<endl;

    int ur[3];
    cout<<"Enter the array inputs"<<endl;
    cin>>ur[0];
    cin>>ur[1];
    cin>>ur[2];
    cout<<"The inputs are "<<ur[0]<<endl;
    cout<<"The inputs are "<<ur[1]<<endl;
    cout<<"The inputs are "<<ur[2]<<endl;
    */
    //With for loop

    int i,n;
    cout<<"Enter the value n: "<<endl;
    cin>>n;
    int brr[n-1];
    cout<<"Enter the values for the array from [0-(n-1)]"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"Array index "<<i<<" has value "<<brr[i]<<endl;
    }
}
