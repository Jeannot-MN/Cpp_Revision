#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string message("Nous vous remercions pour votre hospitalite en notre egard au jour du 04 avril\nbla bla");
	string chers("Chers ");
	string name;
	
	cout<<"what is the message receiver?"<<endl;
	getline(cin,name);
	cout<<chers+name<<endl;
	cout<<message<<endl;
	system("pause");
	return 0;

}
