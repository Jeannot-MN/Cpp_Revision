#include<iostream>
using namespace std;

int main()
{
	int my_array[7] = {3,4,2,0,6,1,5};
	
	for (int i=0; i<7; i++)
	{
		for(int j=i+1; j<7; j++)
		{
			if (my_array[j] > my_array[i])
			{
				int temp = my_array[i];
				my_array[i] = my_array[j];
				my_array[j] = temp;
			}
		}
	}
	
	for (int i=0; i<7; i++)
	{
		cout<<my_array[i]<<endl;
	}
	system("PAUSE");
	return 0;
}
