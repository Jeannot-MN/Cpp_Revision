#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char name[30], init[2];	
	cout<<"Enter your name and surname!"<<endl;
	cin.getline(name,30);
	
	int len=strlen(name);
	init[0]=(char)(name[0]-32);
	
	for(int i=0; i<7; i++)
	{
		if(name[i]==' ')
		init[1]= name[i+1]-32;
	}
	cout<<"Your initials are "<<init<<endl;
	system("pause");
	return 0;
	
}
