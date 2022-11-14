#include<iostream>
using namespace std;
int a;
int m=0;
int i=1;
int n;
int main()
{
	cout<<"How many numbers do you want to enter?"<<endl;
	cin>>n;
	cout<<"Give me your "<< n <<" numbers and i will tell you which of them is the biggest!"<<endl;
	do
	{
		cin>>a;
		if(a>m);
		{
		  m=a;	
		}
		i++;
	}while(i<=n);
	cout<<"The biggest is: "<< m<<endl;
	system("pause");
	return 0;
}
