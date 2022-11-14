#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class InsuranceApp{
	string reference;
	double assurance_prem;
	double cover_req;
	double calcPremium(int)
	
public:
	InsuranceApp();
	void set_info(double, int);	
};

InsuranceApp::InsuranceApp()
{
	reference = "xxxx";
	premium = 0;
	cover_req =0;
}

double InsuranceApp::calcPremium(int score)
{
	double percentage = 0;
	
	if(score =>25 && score <=35)
	    percentage = 2.2;
	
	else if(score =>36 && score <=45)
	    percentage = 1.6;
	    
	else if(score =>46 && score <=55)
	    percentage = 1.2;
	
	else if(score =>56 && score <=65)
	    percentage = 0.8;
	    
	else if (percentage >= 66 )
	    percentage = 0.5;
	    
	return (cover_req / int (score/3)) / (percentage/100);
}

void InsuranceApp::set_info(double cover, int score)
{
	reference = 1000 + rand() % 9000;
	
	while(cover < 50000 || cover > 500000)
	{
		cout << "Invalid amount of cover, Enter again: R";
		cin >> cover;
	}
	cover_req = cover;
}

class Client:public InsuranceApp{
	string name;
	int age;
	char gender;
	char gym;
	char smoker;
	char ill;
	int score
	
public:
	Client();
	
	
	
};

