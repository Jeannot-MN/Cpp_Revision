#include<iostream>
using namespace std;

int main()
{
	int lim;
	int sum=0;
	cout<<"set a limit!"<<endl;
	cin>>lim;
	int i=lim;
	while(i>=1)
	{
		sum=sum+i;
		i--;
	};
	cout<<"His fac like in addition is "<<sum<<endl;
	system("pause");
	return 0;
}
