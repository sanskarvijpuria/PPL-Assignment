#include<iostream>
using namespace std;
class person
{

    public:
        char name[50];
        int age;
        persondetails()
            {
                cout << "Enter the details of the person" << endl;
                cout<<"Name"<<endl;
                cin>>name;
                cout<<"Age"<<endl;
                cin>>age;
            }
}p;

class college
        {

            public:
            char collegename[20], department[10];
             collegedetails()
            {
                cout<<"College name"<<endl;
                cin>>collegename;
                cout<<"Department"<<endl;
                cin>>department;
            }

        }c;
class details : public person, public college
{
     public:
         showdetails()
            {
                cout<<"\nHere are the details entered by you"<<endl;
                cout<<"Name: "<<name<<endl;
                cout<<"College Name: "<<collegename<<endl;
                cout<<"Department: "<<department<<endl;
                cout<<"Age: "<<age<<endl;
            }
         void adult()
            {
                if(age>=18)
                    cout<<"You are an adult"<<endl;
                else
                    cout<<"You are not an adult"<<endl;
            }
}s;

int main()
{
	s.persondetails();
	s.collegedetails();
	s.showdetails();
	s.adult();
}

