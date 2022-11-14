#include<iostream>
using namespace std;

int main()
{
	int number_of_lockers;
	int locker_number=0;
	int opened_lockers=0;
	
	cout<<"Enter the number of lockers"<<endl;
	cin >> number_of_lockers;
	
	cout<<"LOckers that are opened:"<<endl;
	
	while (locker_number<=number_of_lockers)
	{
		int divider=1;
		int number_of_divisors=0;
		while(divider <= locker_number)
		{
			if(locker_number % divider == 0)
			{
				number_of_divisors++;
			}
			divider++;
		}
		if (number_of_divisors % 2 != 0)
		{
			opened_lockers++;
			cout << locker_number<<", ";
		}
		locker_number++;
	}
	cout<<endl;
	cout<<"Number of opened lockers: "<<opened_lockers<<endl;
	system("pause");
	return 0;
 } 
