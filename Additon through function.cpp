#include<iostream>
#include<conio.h>

using namespace std;

float sum(int x,int y)
    {
        return x+y;
    }

int main()
{
    float a,b ;
    cout<<"Enter two numbers to add"<<endl;
    cin>>a>>b;
    cout<<"Addition is "<<sum(a,b)<<endl;
    getch();
    return 0;
}

