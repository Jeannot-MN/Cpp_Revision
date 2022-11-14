#include<iostream>
using namespace std;

int main()
{
	int array [10];
	
	for(int i=0; i<10; i++)
	{
		array[i]=i+1;
		cout<<array[i]<<"\t"<<&array[0]+(10*i)<<endl;;
	}
	
/*	for(int i=0; i<10; i++)
	{
		cout<<&array[0]+10*i<<endl;
	}*/
	system("pause");
	return 0;
}
