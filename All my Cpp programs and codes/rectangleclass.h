#include<iostream>
using namespace std;

class rectangle
{
	public:
		int length;
		
		int width;
		
		int area;
		
		void getlength()
		{
			cout <<"Input the length!"<<endl;
			cin >> length;
		};
		
		void getwidth()
		{
			cout<<"Input the width!"<<endl;
			cin >> width;
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
	rectangle R1;
	
	R1.getlength();
	
	R1.getwidth();
	
	R1.findarea();
	
	R1.displayarea();
	
	system("pause");
	
	return 0;
}
