#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name("hello jeannot");
	//string greet("");
	string phrase =/*greet+" "+*/name;
	
	cout<<phrase<<endl;
	cout<<phrase.find("jeannot")<<endl;
	for(int i=0; i<phrase.size(); i++)
	cout<<(char)(phrase[i]-32);
	
}
