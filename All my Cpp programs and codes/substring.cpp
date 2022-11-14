#include<iostream>
#include<string>

using namespace std;

void substring(string any,int position, int characters)
{
	for(int i =  position; i< position+characters; i++)
	{
		cout << any[i];
	}
	cout<<endl;
}

int main()
{
	string my_string = "Hello bobo";
	
	substring(my_string, 0,5);
	system("pause");
	return 0;
}
