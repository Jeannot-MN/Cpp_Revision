#include<iostream>
using namespace std;

char c;

int main()
{
	cout<<"Enter a letter!"<<endl;
	cin>>c;
	
	switch(c)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		case'y':
		    cout<<"You entered a vowel"<<endl;
		break;
		
		default:
		    cout<<"You did not enter a vowel"<<endl;
	}
	system("pause");
	return 0;
}
