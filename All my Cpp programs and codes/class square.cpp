#include <iostream>
#include<math.h>
using namespace std;

class square
{
	public:
		int side;
};

int main()
{
	square sq1;
	int area;
	
	cout<<"Prompt the size of your square side!!"<<endl;
	cin>> sq1.side;
	
	area= pow(sq1.side , 2);
	
	cout<<"The area of your square is "<<area<<endl;
	
	system("pause");
	return 0;
}
