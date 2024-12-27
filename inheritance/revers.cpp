/*
    enter any numbers and revers it using inheritance
*/
#include<iostream>
using namespace std;

class data
{
    public:

        int n , r , rev;

        data()
        {
            rev=0;
        }
        void input()
        {
            cout<<"enter any numbers :";
            cin>>n;
        }

};


class revers : public data
{
    public:

    // logic one 
    
        void output()
        {
            while(n>0)
            {
                r = n % 10;
                rev = r + (rev * 10);  
                n = n / 10; 
            }

        cout<<rev;
        }
    
    // logic seond
    /*
        void output()
        {
            while (n>0)
            {
                r = n % 10;
                cout<<r;
                n = n / 10;
            }
        }
    */
};

int main()
{
    revers p;
        p.input();
        p.output();

}

