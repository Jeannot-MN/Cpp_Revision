#include<iostream>
using namespace std;

int length;
int width;

class rectangle
{
	public:
		int length;
		
		int width;
		
		int area;
		
		int getlength()
		{
		    cout << "Enter 0 for both to stop the program!\n\n"<<endl;
			cout <<"Input the length!"<<endl;
			cin >> length;
			return length;
		};
		
		int getwidth()
		{
			cout<<"Input the width!"<<endl;
			cin >> width;
			return width;
		};
		
		 int findarea()
		{
			area = length * width;
			return area;
		};
		
		void displayarea()
		{
			cout << "The area is "<< area <<endl;
		};
		
};

int main()
{
	do
	{	
	rectangle R1;
	
	length = R1.getlength();
	
	
	width = R1.getwidth();
	
	R1.findarea();
	
	R1.displayarea();
	
	cout<<"\n\n\n";
	}while(length!=0 && width!=0);	
	
	system("pause");
	
	return 0;
}
