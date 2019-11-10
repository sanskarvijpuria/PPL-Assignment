#include<iostream>
#include<conio.h>

using namespace std;

class calc
    {
    public:
        int a,b;
        void numbers()
            {
                cout<<"Enter the numbers";
                cin>>a>>b;
            }
        void show()
            {
                cout<<"\n Entered number are:\t"<<a<<"\t"<<b;
            }
    };

class addsub: public calc
    {
        int c;
        public:
            void add()
            {
                c=a+b;
                cout<<"\n Addition:\t"<<c;
            }
            void sub()
            {
                c=a-b;
                cout<<"\n Subtraction:\t"<<c;
            }
    };

class multidiv: public addsub
    {
        int d;
        public:
            void multi()
            {
                d=a*b;
                cout<<"\n Multiplication::\t"<<d;
            }
            void div()
            {
                d=a/b;;
                cout<<"\n Division:\t"<<d;
            }
    };
int main()
{
   system("cls");
   multidiv obj;
   obj.numbers();
   obj.show();
   obj.add();
   obj.sub();
   obj.multi();
   obj.div();
   getch();
   return 0;
}
