#include<iostream>
using namespace std;

class abc
{
    int a;

        public:

            void input()
            {
                cout<<"Enter value of A :";
                cin>>a;
            }

            friend void big(abc);
};
void big(abc a1)
{
    cout<<a1.a;
}

int main()
{
    abc a;
    a.input();
    big(a);
}