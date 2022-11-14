#include<iostream>
using namespace std;

int main()
{
	int sum=0, i=0, no;
	cout<<"Enter a number"<<endl;
	while(cin>>no)
	{
		sum += no;
		i++;
		cout<<"Enter a number"<<endl;
	}
	cout<<"The average is "<<(double) sum/i<<endl;
	system("pause");
	return 0;
}
