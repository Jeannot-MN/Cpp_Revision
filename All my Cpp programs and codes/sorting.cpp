#include<iostream>
using namespace std;

int main()
{
	int array[]={6,8,1,0,4};
	cout<<endl<<"Before sorting"<<endl<<endl;
	for (int i=0; i<=4; i++)
	{
		cout<<array[i]<<endl;
	}
	
	cout<<endl<<"After sorting"<<endl<<endl;
	
	for (int l=0; l<=4; l++ )
	{
		for(int r=l+1; r<=4; r++)
		{
			if(array[r]<array[l])
			{
				int temp=array[l];
				array[l]=array[r];
				array[r]=temp;
			}
		}
	}
	
	for (int i=0; i<=4; i++)
	{
		cout<<array[i]<<endl;
	}
	system("pause");
	return 0;
}
