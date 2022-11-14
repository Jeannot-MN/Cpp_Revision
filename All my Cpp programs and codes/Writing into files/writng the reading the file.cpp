#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;


int main()
{
	ifstream inFile;
	ofstream outFile;
	
	// I first write into the file
	outFile.open("text.txt");
	
	if(outFile.fail())
	{
		cout<<"The file could not be opened"<<endl;
		system("pause");
		exit(1);
	}
	
	outFile<<"Hello jeannot this is a file that you have written \n"
	       <<"Are you happy today?"<<endl;
    
    outFile.close();
    
    //Then I read what was written into the file
    inFile.open("text.txt");
    if(inFile.fail())
	{
		cout<<"The file could not be opened"<<endl;
		system("pause");
		exit(1);
	}
	string data;
	
	while(getline(inFile,data))
    {
    	cout<<data<<endl;
	}
    return 0;
	
}


