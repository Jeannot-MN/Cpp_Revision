#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	string classtest[]={" 1", " 2"," 3"};
	string semestertest[]= {" 1", " 2"};
	int sumc=0;
	int sums=0;
	int marks[1][5];
	int predicate;
	for(int i=0; i<=2; i++)
	{
		cout<<"Enter your class test"<<classtest[i]<<" mark:"<<endl;
		cin>>marks[1][i];
		while(marks[1][i]<0 || marks[1][i]>100)
		{
			cout<<"Invalid input try again please!"<<endl;
			cin>>marks[1][i];
		}
		sumc+=marks[1][i];
	}
	for(int i=0; i<=1; i++)
	{
		cout<<"Enter your semester test"<<semestertest[i]<<" mark:"<<endl;
		cin>>marks[1][3+i];
		while(marks[1][3+i]<0 || marks[1][3+i]>100)
		{
			cout<<"Invalid input try again please!"<<endl;
			cin>>marks[1][3+i];
		}
		sums+=marks[1][3+i];
	}
	
	predicate= ((sumc/3) * 0.4)+((sums/2) * 0.6);
	
	cout<<setw(3)<<"CT1"<<setw(10)<<"CT2"<<setw(10)<<"CT3"<<
	setw(10)<<"ST1"<<setw(10)<<"ST2"<<setw(15)<<"Predicate"<<endl;
	cout<<setw(3)<<marks[1][0]<<setw(10)<<marks[1][1]<<setw(10)<<marks[1][2]<<setw(10)<<marks[1][3]<<
	setw(10)<<marks[1][4]<<setw(15)<<predicate<<endl;
	
	system("pause");
	return 0;
	
	
}
