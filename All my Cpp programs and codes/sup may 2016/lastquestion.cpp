#include<iostream>
#include<string>
#include"Furniture.h"
using namespace std;

int main()
{
	char option;
	int size = 10; 
	string furnCode[size] = {"CODB","COD","CTB","ST","DRS","QB","DB","SB","PS","TSC"}; 
	string furnDescrp[size]={"Drawers-Big","Drawers-Big","Coffee Table","Side Table","Dining Room","Queen Bed","Double Bed","Single Bed","Plasma Stand","Two Seater"}; 
	double furnPrice[size]={3999.99, 2061.81, 2000.65, 1200.67, 9999.81, 6999.99, 5999.99, 2999.99, 2500.51, 5500.61}; 
	int stock[size]={30, 15, 10, 17, 10, 15, 10, 15, 25, 18}; 
	double amounts[size]= {1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200};
	double percentage;
	char increase;
	char option3;
	string codeSearched;
	int position;
	int itemsBought; 
	double amountDue;
	double totalSale=0;
	
	cout<<"Select any optio to start:"<<endl;
	
	cout<<"1 Display furniture in stock \n2 Increase prices \n3 Furniture Sales \n4 Furniture to be reodered \n5 Exit"<<endl;
	
	cin>>option;
	
	do
	{
	switch(option)
	{
		case '1':
			displayFurniture(size, furnCode, furnDescrp, furnPrice, stock, amounts);
			break;
			
		case '2':
			cout<<"Do you wan to increase all prices(y/n)?: ";
			cin >> increase;
			if(increase == 'y')
			{
				cout<<"Enter the percentage with which to increase all price: ";
				cin>>percentage;
				increaseAllPrices(furnPrice, percentage, size);
			}
			displayFurniture(size, furnCode, furnDescrp, furnPrice, stock, amounts);
			break;
			  
		case '3':
	
			cout<<"Are there any sales(y/n)?";
			cin>>option3;
			while(option3 == 'y')
	    	{
			  
				cout<<"Enter furniture code: ";
				cin>>codeSearched;
				position = searchFurnCode(furnCode,codeSearched,size);
				if(position<10)
				{
					cout<<"Enter number bought: ";
					cin>>itemsBought;
					if(stock[position] >= itemsBought)
					{
						amountDue=calcAmt(furnPrice, position,itemsBought);
						totalSale+=amountDue;
						cout<<"The amount for "<<furnDescrp[position]<<"(s) = R"<<amountDue<<endl;
				        stock[position] -= itemsBought;
				        displayFurniture(size, furnCode, furnDescrp, furnPrice, stock, amounts);
					}
					else
					    cout<<"Not enough stock only "<<stock[position]<<" available"<<endl;
				}
				else
				   cout<<"Wrong code entered"<<endl;
			cout<<"Are there any sales(y/n)?";
			cin>>option3;
			}
			break;
			
		case '4':
			reOderLevel(stock, furnDescrp, size);
			break;
			
		case '5':
		default:
			
			break;
				
	}
	
	if(option=='1'||option=='2'||option=='3'||option=='4')
	{
		cout<<"Select any optio to start:"<<endl;
	
    	cout<<"1 Display furniture in stock \n2 Increase prices \n3 Furniture Sales \n4 Furniture to be reodered \n5 Exit"<<endl;
	
    	cin>>option;
	}
	
    }while(option=='1'||option=='2'||option=='3'||option=='4');
	
	cout<<"The total sales "<<totalSale<<endl;
	cout<<"Good bye"<<endl;
	system("pause");
	return 0;

}
