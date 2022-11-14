#include<iostream>
using namespace std;

void factorial()
{
    int number;
	int facto = 1;
	cout << "Enter the number"<<endl;
	cin >> number;
	
	for(int i=1; i<=number; i++)
	{
		facto*=i;
	}
	cout <<number <<"! = "<<facto<<endl;
}
