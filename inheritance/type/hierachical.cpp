/*
      
       [a]
    [b]   [c]
  [d] [f]
*/
#include<iostream>
using namespace std;
class dada
{   
    public:
    int moneyD;
    dada()
    {
        moneyD=100000;
    
    }
    void DD()
    {
        cout<<"here is the money of dada :"<<moneyD;
    }

};
class papa :public dada
{
    public:
        int moneyP;
    void PP()
    {
        moneyP= moneyD / 2;
        cout<<"here is the money of papa :"<<moneyP;
    }
  
};
class chacha : public dada
{
    public:
        int moneyC;

        void CP()
        {
            moneyC = moneyD / 2;
            cout<<"here is the money of chacha :"<<moneyC;
        }
};
class child1:public papa
{
    public:
        int moneyC;
        void ch()
        {
            moneyC = moneyP / 2;
            cout<<"here  is the money of child1 :"<<moneyC;
        }

};
class child2:public papa
{
    public:
        int moneyC;
        void ch()
        {
            moneyC = moneyP / 2;
            cout<<"here  is the money of child1 :"<<moneyC;
        }

};
int main()
{
    child1 C;
        C.DD();
        C.PP();  
        C.ch(); 
        
}