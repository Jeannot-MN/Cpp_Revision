#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
#include"StudentAssistant.h"

using namespace std;

int main()
{
	char option;
	int size = 5;
	int index;
	string name[size];
	string qualification[size];
	double mPayment[size];
	double mTax[size];
	int hours[size];
	string stNumber[size];
	double highest;
	double total=0;
	int qual=0;
	int nonqual=0;
	
	srand(time(0));
	
	cout<<"Select any option to start:"<<endl;
	
	cout<<"1 Enter application details \n2 Highest paid employee \n3 View all employee \n4 View totals \n5 Exit "<<endl;
	
	cin>>option;
	do
	{
	switch(option)
	{
		case '1':
			for(int i=0; i<size; i++)
			{
				cout<<"Enter staff number: ";
				cin >> stNumber[i];
				
				cout<<"Enter staff name and initials: ";
				cin>>name[i];
				
				cout<<"Enter staff qualification: ";
				cin>>qualification[i];
				
				if(isQualify(qualification[i])== false)
				{
					cout<<"You do not qualify"<<endl;
					i--;
					nonqual++;
				}
				else
				{
					qual++;
					hours[i]= rand()%20+1;
					calcMonPayAndRev(mPayment[i],mTax[i],hours[i],qualification[i]);
				    total += mPayment[i];
				}
			}
			break;
			
		case '2':
			highestPaid(mPayment, size, highest, index);
			cout<<"The highest paid employee is "<<name[index]<<" with R"<<highest<<endl;
			break;
		
		case '3':
			
			displayAllEmployee(name, qualification, hours, mTax, mPayment, size);
			break;
			
		case '4':
			cout<<"Qualifying people: "<<qual <<endl;
			cout<<"Non-qualifying people:"<< nonqual<<endl;
			cout<<"Total monthly paymrnt: R"<<total <<endl;
			break;
		
		case '5':
		default:
			break;
			
	}
	if(option == '1' ||option == '2' ||option == '3' ||option == '4')
	{
		cout<<"Select any option to start:"<<endl;
	
	    cout<<"1 Enter application details \n2 Highest paid employee \n3 View all employee \n4 View totals \n5 Exit "<<endl;
	
	    cin>>option;
	}
	
    }while(option == '1' ||option == '2' ||option == '3' ||option == '4');
	cout<<"Good bye"<<endl;
	system("pause");
	return 0;
}
