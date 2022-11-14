#include<iostream>
using namespace std;

int main ()
{
	int number;
	int sum=0;
	cout<<"Enter value and 0 when you done!"<<endl;
	
	for(;;)
	{
		
		cin>>number;
		
		if (number==0)
		   break;
		   
		sum=sum+number;   
	}
	
	cout<<"The sum of your numbers is "<<sum<<endl;
	system("pause");
	return 0;
}
