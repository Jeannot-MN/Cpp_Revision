#include<iostream>
using namespace std;

int main()
{
	int number;
	int facto=1;
	cout << "Enter the number"<<endl;
	cin >> number;
	
	for(int i=1; i<=number; i++)
	{
		facto*=i;
	}
	cout << "The factorial of "<<number <<" is "<<facto<<endl;
}
