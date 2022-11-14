#include<iostream>
using namespace std;

int main()
{
	int array[10];
	int arra[10];
	int i=0;
	int sumf=0;
	int sums=0;
	for(i=0;i<=10;i++)
    {
    	array[i]=2*i;
    	arra[i]=array[i]+1;
    	
    	cout<<array[i]<<" And "<<arra[i]<<endl;
    	
    	sumf=sumf+array[i];
    	sums=sums+arra[i];
    
	}
	
		
    	cout<<"The average in array 1 is"<<(double) sumf/10<<endl;
    	cout<<"And the average in array 2 is"<<(double) sums/10<<endl;
    	
    	system("pause");
    	return 0;
    
	
}
