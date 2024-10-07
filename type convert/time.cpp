/*
    convert basic to class
*/
#include<iostream>
using namespace std;

class time
{
    public:
     int hour , minit;

     time()
     {
        hour=0;
        minit=0;
     }

     time(int t)
     {
        hour = t / 60;
        minit = t % 60;
     }

     void display()
     {
        cout<<"====================="<<endl;
        cout<<"|  hour  ||  minit  |"<<endl;
        cout<<"---------------------"<<endl;
        cout<<"|   "<<hour<<"    ||   "<<minit<<"    |"<<endl;
        cout<<"=====================";
     }
};
int main()
{
    time p;
    int k;

        cout<<"Enter any number for minit :";
        cin>>k;

        p=k;
        p.display();
}