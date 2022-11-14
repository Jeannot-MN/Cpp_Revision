#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	string file;
	ifstream inFile;
	cout<<"What file do you want to read?: ";
	getline(cin, file);
	inFile.open(file.c_str());
	
	if (inFile.fail())
	{
		cout<<"We could not open the file"<<endl;
		cout<<"Check if the file is existing"<<endl;
		exit(1);
	}
	
	string line;
	
	while(getline(inFile,line))
	   cout<<line<<endl;
	
	system("pause");
	return 0;   
}
