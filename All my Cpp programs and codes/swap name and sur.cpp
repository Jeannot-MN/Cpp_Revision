#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[30];
	char first[15];
	char sur[15];
	int c;
	
	cout<<"Enter your name"<<endl;
	cin.getline(name,29);
	
	for(int i=0; i<=29; i++)
		if(name[i]==' ')
		c=i;	
		
	
	strncpy(first,name,c);
	strcpy(sur, name+c+1);
	strcat(sur, " ");
	strcat(sur,first);
	cout<<sur<<endl;
	cout<<strrev(sur)<<endl;
	
}
