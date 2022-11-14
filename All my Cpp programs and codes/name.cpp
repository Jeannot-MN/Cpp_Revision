#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[30];
	cout<<"Enter your name"<<endl;
	cin.getline(name,29);//this will also count blanks
	cout<<"Your name is "<< name<<endl;
	cout<<"and your name has "<<strlen(name)<<" caracters"<<endl;
	system("pause");
	return 0;
	
}
