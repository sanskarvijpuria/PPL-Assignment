#include <iostream>

using namespace std;

int main()
{
    double n1, n2, n3;
    cout<<"Enter three numbers: "<<endl;
    cin>>n1>>n2>>n3;
    if( n1>=n2 && n1>=n3)
        cout<<n1<<" is the largest number.";
    else if (n2>=n1 && n2>=n3)
        cout<<n2<<" is the largest number.";
    else
        cout<<n3<<" is the largest number.";
    return 0;
}
