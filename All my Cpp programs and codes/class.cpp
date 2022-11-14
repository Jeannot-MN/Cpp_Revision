#include<iostream>
using namespace std;

class cube
{
	public:
		int length;
		int width;
		int height;
		
};

int main()
{
	cube cube1;
	int volume;
     
    cout<<"Enter the length!"<<endl;
    cin>> cube1.length;
    
    cout<<"Enter the width!"<<endl;
    cin>> cube1.width;
    
    cout<<"Enter the height!"<<endl;
    cin>> cube1.height;
    
    volume= cube1.length * cube1.width * cube1.height;
    
    cout<<"The volume of this cube is "<< volume<<" units"<<endl;
    
    system("pause");
    return 0;
	
}
