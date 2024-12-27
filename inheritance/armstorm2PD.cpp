/*
    enter n number and chack 1 to n numbert print armstorm number 
*/
#include<iostream>
using namespace std;

class data
{
    public:
        int n , arm , r , tamp;

        data()
        {
            arm=0;
        } 
        void input()
        {
            cout<<"enter number :";
            cin>>n;
        }

};
class arms : public data
{
    public:

        int i;

        void output()
        {
            for(i=1; i<=n; i++)
            {
                tamp = i;
            
                    r = i % 10;
                    arm = (r * r * r) + arm;
                    i = i / 10;
                
            if(tamp == arm)
            {
                cout<<arm<<" ";
            }
            }

        }
};

int main()
{
    arms p;
        p.input();
        p.output();
}