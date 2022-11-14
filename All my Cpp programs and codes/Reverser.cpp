#include<iostream>
using namespace std;

int n,rem;

int main()
{
	cout<<"Enter the number you want me to reverse!"<<endl;
	cin>>n;
	
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		cout<<rem;
	}
	cout<<" "<<endl;
	system("pause");
	return 0;
}
