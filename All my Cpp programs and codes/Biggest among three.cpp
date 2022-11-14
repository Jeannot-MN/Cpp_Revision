#include<iostream>
using namespace std;

int a;
int mx=0;
int i=1;

int main()
{
	cout<<"Enter your 3 numbers!"<<endl;
	
	do
	{
		cin>>a;
		if(a>mx)
		mx=a;
		i++;
	}
	while(i<=3);
	
	cout<<"The biggest number is "<<mx<<endl;
	
	system("pause");
	return 0;
	
}
