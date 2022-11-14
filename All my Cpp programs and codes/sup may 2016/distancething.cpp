#include<iostream>
#include<math.h>
using namespace std;

int calcNumberOfDays(int distance, int dayly)
{
	return distance / dayly;
}

int main()
{
	int distance;
	int dayly;
	
	cout<<"Enter the total distance in Km: ";
	cin>>distance;
	
	cout<<"Enter the dayly distance: ";
	cin >> dayly;
	
	if(distance % dayly == 0)
	   cout<<"You will need "<<calcNumberOfDays(distance, dayly)<<"days"<<endl;
	else
	   cout<<"You will need "<<calcNumberOfDays(distance, dayly)+1<<"days"<<endl;
	
	   
	
	system("pause");
}
