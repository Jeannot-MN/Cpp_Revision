#include<iostream>
#include<string>
#include<sstream>

long factorial(int number)
{
	if (number<=1)
	    return 1;
	
	else
	{
		return number * factorial(number-1);
	}    
}

int fabi(int number)
{
	if (number ==1 || number==0)
	    return number;
	    
	else
	{
		return fabi(number-1) + fabi(number-2);
	}    
}
using namespace std;

int main()
{
	string user_input;
	int num1;
	int num2;
	int sum;
	
	cout<<"Enter the first number: ";
	getline(cin, user_input);
	stringstream(user_input) >> num1;
	
	cout<<"Enter the second number: ";
	getline(cin, user_input);
	stringstream(user_input) >> num2;
	
	sum = num1 + num2;
	
	cout<<"Their sum is "<<sum<<endl;
	
	cout<<"The factorial of num1 is "<<factorial(num1)<<endl;
	cout<<"The factorial of num2 is "<<factorial(num2)<<endl;
	
	for(int i=0; i<=10; i++)
	{
	    cout<<i<<"\t"<<fabi(i)<<endl;
	}
	
	return 0;
}
