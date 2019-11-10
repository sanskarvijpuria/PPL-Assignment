#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the numbers"<<endl;;
    cout<<"A:";
    cin>>a;
    cout<<"B:";
    cin>>b;
    cout<<"Numbers after swapping"<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"A is "<<a<<"\nB is "<<b<<endl;
    return 0;
}
