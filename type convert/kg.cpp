#include<iostream>
using namespace std;
class kgm
{
    public:

        int kg , gram;

        kgm()
        {
            kg=0;
            gram=0;
        }
        kgm(int t)
        {
            kg = 1000/t;
            gram = t / 1000;
        }
        void display()
        {
            cout<<kg<<"  "<<gram;
        }

};
int main()
{
    kgm p;
    int k;
        cout<<"enter any number :";
        cin>>k;
        p=k;
        p.display();

}