//Program to reserve a given number
//By Jeannot MN 

#include <iostream>
using namespace std;

int main()
{
	//Declaring my variables
	int number;
	int lastdigit;
	int sum=0;
	
	//Ask the user to give the number to reverse
	cout<<"Give me a number you want me to reverse"<<endl;
	
	//The user give the number
	cin >> number;
	
	do
	{
		int i = 0;//counter of position (from right to left) of the digit we keep
		
		lastdigit = number % 10; // Here we use the property of mod10 which gives the last digit of any number
		
		number= (number - lastdigit) / 10; // Here we will like delete the last digit of the number and keep the rest
		
		cout<<lastdigit;
		/*if (i>0)
		{
			for(int p =1; p<=i; p++)
		       {
			
			      lastdigit= lastdigit * 10;
			      cout<<lastdigit<<endl;
		       };
		};
		
		
		i++;
		
		sum= sum + lastdigit;*/
		
	} while(number!=0);
	
	//cout<<"The reverse is "<<sum<<endl;
	
	system("pause");
	return 0;
	
}
