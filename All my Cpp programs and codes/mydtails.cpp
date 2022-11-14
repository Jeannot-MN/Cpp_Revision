#include<iostream>
#include<string>
using namespace std;

class mydetails
{
	public:
		string name;
		int stdnum;
		void getname()
		{
			cout<<"What is your name"<<endl;
			cin>>name;
		}
		void getstdnum()
		{
			cout<<"Enter your student number"<<endl;
			cin>>stdnum;
		}
		
		void displaydetails()
		{
			cout<<"Your name:: "<<name<<endl;
			cout<<"Your student number:: "<<stdnum<<endl; 
		}
		
};

int main()
{
	mydetails d1;
	d1.getname();
	d1.getstdnum();
	d1.displaydetails();
	system("pause");
	return 0;
}
	
