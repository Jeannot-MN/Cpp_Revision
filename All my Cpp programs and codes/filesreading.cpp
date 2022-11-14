#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	//ofstream outFile;
    //outFile.open("jmn.txt");
    
    ifstream inFile;
    inFile.open("jmn.txt");

    /*if(outFile.fail())
    {
        cout<<"\nThe file was not successfully opened"
            <<"\nPlease check that the file currently exists."
            <<endl;
        exit(1);
    }
	int x =1;
	while (x<=10)
	{
		outFile << "Jeannot is there again"<<endl;
		x++;
	}*/
	if(inFile.fail())
    {
        cout<<"\nThe file was not successfully opened"
            <<"\nPlease check that the file currently exists."
            <<endl;
        exit(1);
    }
	string line;
	
	while (getline(inFile,line))
        cout<<line<<endl;
	
	
}
