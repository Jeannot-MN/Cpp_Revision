#include<iostream>
using namespace std;

int a,b,c;

int main()
{
	cout<<"Enter your 3 numbers!"<<endl;
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	{
	    cout<<"The biggest number is "<<a<<endl;	
	}
	
	else if(b>c)
	{
	    cout<<"The biggest number is "<<b<<endl;	
	}
	else
	{
	    cout<<"The biggest number is "<<a<<endl;	
	}
	system("pause");
	return 0;
}
