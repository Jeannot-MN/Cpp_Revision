#include<iostream>
using namespace std;

#define great 1

int main()
{
	int a, b, c;
	cout<<"Enter two numbers and i will tell you the biggest!"<<endl;
	cin>>a>>b>>c;
	
	#if great ==1
	   cout<<"The biggest is "<<(a>b?a:b);
	   
	#else
	   cout<<"The biggest is "<<b;
	   
	cout<<"The name of the file is "<< _FILE_<<endl;
	   
	#endif
}
