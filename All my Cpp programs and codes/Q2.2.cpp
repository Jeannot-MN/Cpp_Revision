#include<iostream>
#include<string>
using namespace std;

int main()
{
	char option;
	string letters;
	
	cout<<"Enter Y/y to convert a telephone number from letters to digits.\nEnter any other letter to terminate the program "<<endl;
	cin >> option;
	
	while (option=='y' || option=='Y')
	{
		cout<<"Enter  a telephone number using letters: "<<endl;
		getline (cin, letters);
		
		if (letters=="get loan" or letters=="GET LOAN")
		    cout<<"The corresponding telephone number is: \n438-5626"<<endl;
		
		else if (letters=="call home" || letters=="CALL HOME")
		    cout<<"The corresponding number is: \n225-5466"<<endl;	 
	}
	
	system("pause");
	return 0;
}
