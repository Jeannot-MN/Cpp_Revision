#include<iostream>
using namespace std;

int main()
{
	int base;
	cout<<"What is the base of your triangle"<<endl;
	cin>>base;
	
    for(int i=1; i<=base; i++)
	{
		for(int j=base; j>=i; j--)
		{
			cout<<" ";
		}
		for(int k=1; k<=i; k++)
    	{
	    	cout<<char(i+64)<<" ";
    	}
	    cout<<endl;
	}
	for(int i=1; i<=base; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<" ";
		}
		for(int k=base; k>=i; k--)
    	{
	    	cout<<char(i+64)<<" ";
    	}
	    cout<<endl;
	}
	system("pause");
	return 0;
}
