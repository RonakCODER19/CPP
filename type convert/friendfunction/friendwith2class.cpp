#include<iostream>
using namespace std;
class xyz;

class abc
{
    int a;

        public:
            void input()
            {
                cout<<"Enter value of A :";
                cin>>a;
            }

            friend void max(abc,xyz);
};

class xyz
{
    int x;

        public:
            void input()
            {
                cout<<"Enter value of x:";
                cin>>x;
            }

        friend void max(abc,xyz);
};
void max(abc a1,xyz x1)
{
    if(a1.a>x1.x)
    {
        cout<<"A is big";
    }
    else
        cout<<"X is big";
}

int main()
{
        abc a;xyz x;
            a.input();
            x.input();
        max(a,x);

}

