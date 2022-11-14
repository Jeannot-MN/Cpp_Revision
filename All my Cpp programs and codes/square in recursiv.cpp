#include<iostream>
#include<math.h>
using namespace std;

int square(int n)
{
	if(n==1)
	return 1;
	
	else if (n==0)
	return 0;
	
	else 
	return square(n-2)+ 4*(n-1); 
	
}
int main()
{
	for(int i=0; i<11; i++)
	{
		cout<<square(i)<<endl;
	}
	
	system("pause");
	return 0;
}
