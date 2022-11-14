#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>

using namespace std;

int main()
{
	int tab[15];
	srand(time(0));
	
	for(int i=0; i<=14; i++)
	{
		tab[i] = rand()%20+1;
		 
		cout<<setw(3)<< tab[i]<<"------------"<<setw(9)<<&tab[i]<<endl;
	}
}
