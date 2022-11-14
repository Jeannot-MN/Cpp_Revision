#include<iostream>
#include<string>
using namespace std;
int main()
{
	string prompt("What is your name?");
	string line(40,'-');
	string name;
	string great="Hello ";
	
	cout<<prompt<<endl;
	cout<<line<<endl;
	
	getline(cin,name);
	
	cout<<great + name<<endl;
	
	cout<<"And your name is "<<name.length()<<" characters long";
	
}
