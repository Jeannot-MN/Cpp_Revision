#include<iostream>
using namespace std;

int i,j,k=0,p=0;
char c='*', b=' ';

int main()
{
	for(i=10; i>=1; i--)
	{
		for(k=1;k<=i;k++)
		{
			cout<<b ;
		};
		
		p++;
		
		for(j=1;j<=p;j++)
		{
			cout<<c;
		};
		
		for(j=1;j<=p;j++)
		{
			cout<<c;
		};
		
		for(k=1;k<=i;k++)
		{
			cout<<b ;
		};
		
		cout<<endl;
	}
	system("pause");
	return 0;
	
}
