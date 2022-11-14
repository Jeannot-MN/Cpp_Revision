#include<iostream>
using namespace std;
int n;
int i=1;
int bc=0;
int main()
{
	cout<<"How may times do you want me to repeat hello?"<<endl;
	cin>>n;
	while(i<=n)
	{
		bc=bc+1;
		for(i=1;i<=bc;i++)
        	{
		       cout<<"Hello! ";
        	}
	    cout<<" "<<endl;
	}
	
	system("pause");
	return 0;
}
