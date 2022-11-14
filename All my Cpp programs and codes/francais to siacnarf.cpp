#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char mot[100];
	cout<<"\t\t\tTRADUCTEUR FRANCAIS-SIACNARF"<<endl;
	cout<<"\t\t\t----------------------------"<<endl;
	cout<<"Entrer le mot a traduire!"<<endl;
	cin.getline(mot,99);
	cout<<"\n ==> "<<strrev(mot)<<endl;
	system("pause");
	return 0;
}
