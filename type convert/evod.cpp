/*
    convert class to basic
*/
#include<iostream>
using namespace std;

class evod
{
    public:

        int n=0;

        void input()
        {
            cout<<"enter any number :";
            cin>>n;
        }
        int display()
        {
            return n;         
        }
};
int main()
{
    evod p;
    int k;
        p.input();

        k = p.display();
        
            if(k % 2 == 0)
            {
                cout<<"even number :"<<k;
            }
            else
                cout<<"odd number :"<<k;
}