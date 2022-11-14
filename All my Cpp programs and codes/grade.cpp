#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 9;
	int my_array[SIZE] = {67,57,69,87,90,73,70,83,71};
	int n[5]={0,0,0,0,0};
	
	for (int i=0; i<SIZE; i++)
	{
		if(my_array[i] <= 59)
			n[0]++;
		else if (my_array[i]<=69)
		    n[1]++;
		else if(my_array[i]<=79)
		    n[2]++;
		else if(my_array[i]<=89)
		    n[3]++;
		else if(my_array[i]<=99)
		    n[4]++;				
	}
	
	cout<<"50-59: ";
	for (int i=0; i<n[0]; i++)
	    cout<<"*";
	cout<<endl;
	
	cout<<"60-69: ";
	for (int i=0; i<n[1]; i++)
	    cout<<"*";
	cout<<endl;
		
	cout<<"70-79: ";
	for (int i=0; i<n[2]; i++)
	    cout<<"*";
	cout<<endl;    
		
	cout<<"80-89: ";
	for (int i=0; i<n[3]; i++)
	    cout<<"*";
	cout<<endl;
	
	cout<<"90-99: ";
	for (int i=0; i<n[4]; i++)
	    cout<<"*";			    
	cout<<endl;
	
	system("pause");
	return 0;    
}
