#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char name[30];
	cout<<"Enter your name!"<<endl;
	cin.getline(name,30);
	int len=strlen(name);
	for(int i=0; i<len; i++)
	cout<<(char)(name[i]-32);
	cout<<endl;
	system("pause");
	return 0;
}
