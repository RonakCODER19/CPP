/*
	here is the mutileve inheritins
	[a]
	 |
    [b]
	 |
	[c]
*/
#include<iostream>
#include<conio.h>
using namespace std;

class dada
{
	public :
		int moneyD;
		void inputD()
		{
			cout<<"take money from dada :";
			cin>>moneyD;
		}
};
class papa :public dada
{
	public:
		int moneyP;
			void inputP()
			{
				cout<<"take money from papa :";
				cin>>moneyP;
			}
};
class child :public papa
{
	public:
		int moneyC;
	child()
	{
		moneyC=1000;
	}
		void ouput()
		{
			cout<<"here is the money from data :"<<moneyD<<endl;
			cout<<"here is the money from papa :"<<moneyP<<endl;
			cout<<"here is the money from child :"<<moneyC;
		}
	
		
};

int main()
{
	dada d;
	papa p;
	child c;

		// child class use propertis of it self , papa & dada class
		c.inputD(); 
		c.inputP();
		c.ouput();

		// papa class use propertis of papa & dada class
		p.inputP();
		p.inputD();
		
		// use propertis of its self
		d.inputD();
	
}
