#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>

using namespace std;

int main()
{
	int tab[15];
	srand(time(0));
	int n;
	
	cout<<"\aWhat element do you want to look for?"<<endl;
	cin>>n;
	cout<<endl;
	cout<<endl;
	
	for(int i=0; i<=14; i++)
	{
		tab[i] = rand()%20+1;
		cout<<tab[i]<<endl;
		if(tab[i]==n) 
		cout<<"\a position "<< i+1 <<endl;
	}
}
