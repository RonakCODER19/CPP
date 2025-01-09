/*
	here is the single inheritins
	
	[a] 
	 |
	[b]
*/
#include<iostream>
using namespace std;
class a
{
	public:
		
		int numberA;
		void input()
		{
			
			cout<<"Enter any number :";
			cin>>numberA;
		}
};
class b : public a
{
	public:
	
		void output()
		{
			cout<<"here is the number of a class :"<<number;	
		}
};

int main()
{
	b p;
	  p.input();
	  p.output();
}
