/*
    enter any number and chack its armstom or not
*/
#include<iostream>
using namespace std;

class data
{
    public:

        int n , r , arms , tamp;

        data()
        {
            arms=0;
        }
        void input()
        {
            cout<<"enter any number to chack amr or not :";
            cin>>n;
        }
};

class arm : public data
{
    public:

        void output()
        {
            tamp = n;

                while(n>0)
                {
                    r = n % 10;
                    arms = (r * r * r) +arms;
                    n = n / 10;

                }
             
        if(tamp == arms)
        {
            cout<<"its armstorm number ";
        }
        else {
            cout<<"its not armstorm";
        }

        }
};

int main()
{
    arm p;
        p.input();
        p.output();
}