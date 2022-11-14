#include<iostream>
using namespace std;

int main()
{
	int array[5]= {1,23,4,5,5};
	int *p = array;
	
	for(int i=0; i<5; i++)
    {
	    cout << *p<<endl;
	    p++;
	}
		
	system("pause");
}
