#include<iostream>
#include<string>
#include "Postage.h"

using namespace std;

int main()
{
	string invoiceNumber;
	int parcelWeight;
	string distance;
	double cost;
	int time;
	double hours;
	char insurance;
	char priority; 
	double insAmount; 
	double prioAmount; 
	double amountDue;
	bool validate;
	char answer;
	int nofParcel = 0;
	double amParcel = 0;
	
	
	
	do
	{
		cout << "Enter invoice number: ";
	    cin >> invoiceNumber;
	
	    cout <<"Enter the weight of the parcel: ";
	    cin >> parcelWeight;
	
	    validate = isValid(parcelWeight);
	
		if(validate == true)
		{
			cout << "Enter the time in minutes: ";
			cin >> time;
			
			hours = time /60;
			
			cout << "Enter the distance for parcel (Local or Long): ";
			cin >> distance;
			
			validate = validateDistance (distance);
			
			while(validate == false)
			{
				cout<<"Incorrect distance entered!!!"<<endl;
				cout << "Enter the distance for parcel (Local or Long): ";
		    	cin >> distance;
		    	validate = validateDistance (distance);
			}
			
			cost = determineCost(distance, parcelWeight, hours);
			
			cout << "Would you like to insure your parcel? (Y/N): ";
			cin >> insurance;
			
			cout << "Would you like your parcel to be treated as a priority? (Y/N): ";
			cin >> priority;
			
			amountDue = calcAmountDue(insurance, priority, cost, insAmount, prioAmount, amountDue);
			
			cout<<"Invoice No \t Weight  Minute Insurance \t Priority \t AmountDue"<<endl;
			cout<< invoiceNumber <<"\t\t R"<<parcelWeight<<"\t R"<<time<<"\tR"<<insAmount<<"\t\t R"<<prioAmount<<"\t\t R"<<amountDue<<endl;
			
			nofParcel++;
			amParcel += amountDue;
		}
		
		else
		cout<<"Invalid weight"<<endl;
		
		cout<<"Do you want another delivery (Y/N): ";
		cin>>answer;
	}while( answer == 'Y');
	
	cout<<"Total Delivery: "<<nofParcel<<endl;
	cout<<"Total amount delivery: R"<<amParcel<<endl;
	system("PAUSE");
	return 0;
}


