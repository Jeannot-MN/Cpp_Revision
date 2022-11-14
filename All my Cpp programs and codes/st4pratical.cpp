#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

string determineStatus(int exam [], int final []);

void display(string number [], string name [], int predicate [], int exam [], int final [], string &status );


int main()
{
	string stNumber[15]={"210112233","210223344","210334455","210445566","210556677",
	                   "210667788","210123456","210234567","210345678","210456789",
					   "210987654","210876543","210565656","210767676","210898989"};
					  
	string stName[15]={"A Boyd","B Cummings","C Nkosi","M Mooki","N Baloyi",
	                 "S Smith","D Davids","W Wani","Q Zondo","M Johnson",
				     "G Flemming","B Gwele","Z Zoe","H Ho","D Ras"};
					 
	int stPredicate[15]={45,55,66,40,40,56,72,66,54,43,44,48,50,50,47};
	
	int examMark[15];
	
	int finalMark[15];
	
	int a;
	
	string status;
	
	for (int i=0; i<=14; i++)
	{
		int mark;
		cout<<"Enter exam mark for student "<<stName[i]<<": ";
		cin>>mark;
		if(mark<=100 && mark>=0)
		    examMark[i]=mark;
		else
		   {
		   	  cout<<"INVALID MARK RETRY PLEASE!"<<endl;
		   	  i--;
		   }    
		cout<<endl;   
	}
	
	cout<<"Thank you all the marks have been entered"<<endl<<endl;
	
	cout<<"StdNumber"<<setw(20)<<"StName"<<setw(10)<<"Pred"<<setw(10)<<"exam"<<setw(10)<<"final"<<setw(10)<<"status"<<endl<<endl;
	
	determineStatus(examMark,finalMark);
	
	display(stNumber, stName, stPredicate,examMark,finalMark, status );
		
	system("pause");
	return 0;			 				   
}

string determineStatus(int exam [], int final [])
{
	string status;
	for(int y=0; y<15; y++)
	{
		if(final[y]<50 && exam[y]>40)
		{
		    status="Fail";
		} 
		  
        else if(final[y]>=75)
        {
        	status= "PD";
		}
		    
		else if(exam[y]<40)
		{
			status= "Fail (subminimum)";
		}    
		else
		   status="Pass";      
	}
	return status;
}

void display(string number [], string name [], int predicate [], int exam [], int final [], string &status )
{
	for(int x=0; x<15; x++)
	{
		final[x]= (predicate[x]+exam[x])/2;
		status= determineStatus(exam,final);
		cout<<number[x]<<setw(20)<<name[x]<<setw(10)<<predicate[x]<<setw(10)<<exam[x]<<setw(10)<<final[x]<<"\t"<<status<<endl;
	}
}
