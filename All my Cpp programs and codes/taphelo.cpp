#include<iostream>
#include<string>
using namespace std;

int main()
{
	string my_string;
	cout<<"Enter a string: ";
	cin >> my_string;
	
	//cout << my_string.length()<<endl;
	
	int size = my_string.length();
	
	for(int i=0; i<=size-1; i++)
	{
		for(int j =0; j<(size-1)-i; j++)
		{
			cout <<"*";
		}
		for(int k=i; k>=0; k--)
		{
			cout<<my_string[k];
		}
		for(int k=0; k<=i; k++)
		{
			cout<<my_string[k];
		}
		for(int j =0; j<(size-1)-i; j++)
		{
			cout <<"*";
		}
		cout << endl;
		
	}
	
	
	system("PAUSE");
	return 0;
}
