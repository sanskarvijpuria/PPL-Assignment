#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i;
    char arr[10];
    cout<<"Enter the values to store in array:"<<endl;
    for (i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    cout<<"Values stored in array:"<<endl;
      for (i=0;i<10;i++)
        {

            cout<<arr[i]<<endl;
        }
    return 0;
}
