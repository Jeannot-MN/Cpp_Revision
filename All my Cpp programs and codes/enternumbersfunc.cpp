#include <iostream>
using namespace std;

int sum(void)
{
	int a;
	int sum=0;
	
	cout<<"Enter several numbers and 0 when you done"<<endl;
	
	for(;;)
	{
		cin>>a;
		
		if(a==0)
		   break;
		   
		sum+=a;   
	}
	
	
}

int main()
{
	for(;;)
{
// sum a sequence of numbers entered from
// the keyboard
cout << "Enter next sequence" << endl;
int accumulatedValue = sum();
// terminate the loop if sumSequence() returns
// a zero
if (accumulatedValue == 0)
{
break;
}
// now output the accumulated result
cout << "The sum of your numbers is "
<< accumulatedValue
<< "n"
<< endl;
}
system("pause");
return 0;
}
