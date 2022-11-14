#include<iostream>
using namespace std;

int a,b,c;

int main()
{
	cout<<"Enter the two numbers!"<<endl;
	
	cin>>a>>b;
	
	cout<<"Before swapping a="<<a<<" b="<<b<<endl;
	
	c=a;// here we keep the initial value of a in c
	
	a=b;// here the value of b is assigned to a
	
	b=c;// here we assign to initial value of a, which was store in c, to b
	
	cout<<"After swapping a="<<a<<" b="<<b<<endl;
	
	system("pause");
	return 0;
}
