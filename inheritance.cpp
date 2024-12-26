/*
    Enter a number and print it rever using inheritance 
*/
#include<iostream>
using namespace std;

class a
{
    public:

        int number;

            a()
            {
                cout<<"Enter number :";
                cin>>number;
            }
};

class b : public a
{
    public:
        
        int rev; 

            void output()
            {
                while(number>0)
                {
                    rev = number % 10;
                    cout<<rev<<" ";
                    number = number / 10;
                }
            }
};

int main()
{
    b p;

        p.output();
}