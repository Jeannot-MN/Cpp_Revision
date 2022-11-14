#include<iostream>
using namespace std;

int main()
{
	double highestNetSal = 0;
	double highestRepNum = 0;
	int repNum;
	char repType;
	int basic;
	double comm1;
	double comm2;
	double comm3; 
	bool valid;
	int sales;
	char birth;
	double grossSal;
	double taxPayable;
	double netPay;
	double empContr;
	
	cout << "Enter representative number (-1 to end)"<<endl;
	cin >> repNum;
	
	do
	{
		cout<<"Enter type of representative"<<endl;
		cin>> repType;
		
		switch(repType)
		{
			case 'A':
				basic = 5000;
				comm1 = 0.05;
				comm2 = 0.075;
				comm3 = 0.09;
				valid = true;
				break;
				
			case 'B':
				basic = 8000;
				comm1 = 0.055;
				comm2 = 0.0875;
				comm3 = 0.098;
				valid = true;
				break;
				
			case 'C':
				basic = 9500;
				comm1 = 0.06;
				comm2 = 0.092;
				comm3 = 0.115;
				valid = true;
				break;
				
			default:
				cout<<"Invalid type"<<endl;
				valid = false;
				break;
		}
		
		if(valid == true)
		{
			cout << "Enter the monthly sales"<<endl;
			cin >> sales;
			
			cout<<"Birth month - Y/N"<<endl;
			cin>>birth;
			
			if (sales < 5000)
				grossSal = basic + sales * comm1;
			
			else
			    if (sales < 12000)
			        grossSal = basic + sales * comm2;
			    
			    else
				    grossSal = basic +  sales * comm3;
		    
		    if (birth == 'Y')
		        grossSal += basic;
		    
			else;
			    
	    	taxPayable = grossSal * 0.125;
		
		    empContr = (grossSal - taxPayable) * 0.05;	
		
		    netPay = grossSal - taxPayable - empContr;
		
		    cout <<"For representative "<<repNum<<":"<<endl;
		    cout <<"Gross Salary: "<<grossSal<<endl;
		    cout <<"Tax Payable: "<<taxPayable<<endl;
		    cout <<"Employee Fund Contribution: "<<empContr<<endl;
		    cout <<"Net Pay: "<<netPay<<endl;
		
		    if(netPay > highestNetSal)
		    {
			    highestNetSal = netPay;
			    highestRepNum = repNum;
		    }
	    }
		cout << "Enter representative number (-1 to end)"<<endl;
	    cin >> repNum;
			
	}while(repNum != -1);
	
	cout << highestRepNum << " earned the highest net salary with R"<<highestNetSal<<endl;
	
	system("pause");
	return 0;
}
