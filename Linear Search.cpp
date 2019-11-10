 //Program for search an element using linear search.

#include<iostream>

using namespace std;

int main()
{
    int i,flag=0,d=0;
    char arr[3],a;
    cout<<"Enter the values to store in array:"<<endl;
    for (i=0;i<3;i++)
        {
            cin>>arr[i];
        }

    cout<<"Enter the element to be searched ";
    cin>>a;

    for(i=0;i<3;i++)
        {
            if(arr[i]==a)
                {
                    flag+=1;
                    d=i;
                }
        }
    if(flag==1)
        cout<<"Element found at "<< d+1<<endl;
    else
        cout<<"Wrong element entered";
    return 0;
}
