/*
    here is the type of multiple inheritanse
    [a]     [b]
     |       |
     |->[c]<-|
*/
#include<iostream>
using namespace std;

class father
{
    public:

        int moneyf;

            void inputF()
            {
                cout<<"take money from a father :";
                cin>>moneyf;
            }
};

class mother
{
    public:
        
        int moneym;

            void inputM()
            {
                cout<<"take money from a mother :";
                cin>>moneym;
            }
};

class child : public father , public mother
{
    public:

        int sumofmoney;

            void output()
            {
                sumofmoney = moneyf + moneym;
                cout<<"here is the having money of child :"<<sumofmoney;
            }
};

int main()
{
    child c;

        c.inputF();
        c.inputM();
        c.output();
}