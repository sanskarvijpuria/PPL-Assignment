#include<iostream>

using namespace std;

int main()
{
    int a,b ;

    cout<<"Enter the number";
    cin>>a;
    cout<<"Squares are"<<endl;

    for(int i=1;i<=a;i++)
    {
        b=i*i;
        cout<<b<<endl;
    }

    return 0;
}
