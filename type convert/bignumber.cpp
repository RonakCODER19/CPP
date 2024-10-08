/*
    convert class to basic
*/
#include<iostream>
using namespace std;

class megar
{
    public:

        int n,m;

        void input()
        {
            cout<<"Enter first number :";
            cin>>n;
            cout<<"Enter seconde number :";
            cin>>m;
        }
        int display()
        {
            if(m>n)
            {
                return m;
            }
            else
                return n;
        }
};
int main()
{
    megar p;
    int k;
        p.input();

        k=p.display();

        cout<<"big number is"<<k;

}