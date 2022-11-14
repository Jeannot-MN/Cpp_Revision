#include <iostream>
using namespace std;

int main()
{
	int number;
	
	cout<<"Enter the number:"<<endl;
	cin>>number;
	
	if(number%2==0 && number%3==0)
	cout<<"This number is even and divisible by 3"<<endl;
	
	else if (number%2==0)
	cout<<"This number is even but not divisibloe by 3"<<endl;
	
	else
	cout<<"This is an odd number"<<endl;
	
	system("pause");
	return 0;
}
