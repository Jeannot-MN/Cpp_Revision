#include<iostream>
using namespace std;

int sum(int a, int b)
{
	return a+b;
}
int main()
{
	int a;
	int b;
	cout << "Enter the first number::";
	cin >> a;
	cout << "Enter the second number::";
	cin >> b;
	cout <<a<<" + "<<b<<" = "<<sum(a,b)<<endl;
}
