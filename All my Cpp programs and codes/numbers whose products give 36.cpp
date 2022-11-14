#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i <=36;i++)
	{
		for(int j=1; j<=36; j++)
		{
			if((i*j)==36)
			{
				cout<<i<<" times "<<j<<" = "<<36<<endl;
			}
		}
	}
}
