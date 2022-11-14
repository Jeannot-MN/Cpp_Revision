#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;


int main()
{
	srand(time(0));
	int tofind;
	int guess;
	int tries=5;
	char option;
	
	cout<<"Select the game difficulty to start:"<<endl;
	cout<<"1.Easy \t2.Meduim \t3.Difficult"<<endl;
	
	cin>>option;
	
	while(option=='1' || option=='2' || option=='3')
	{
		switch(option)
	    {
		    case '1':
			    tofind=rand()%21;//Generate a number between 0 and 20 for Easy level
			    break;
		    case '2':
		        tofind=rand()%51;//Generate a number between 0 and 50 for Meduim level
			    break;
		    case '3':
		        tofind=rand()%101;//Generate a number between 0 and 100 for Difficult level
				break;		
	    }
	
	    while (tries>0)
	    {
		    cout<<"You have "<<tries<<"attempt(s) left "<<endl;
		    cout<<"Enter your guess:";
	        cin>>guess;
	
	        if(guess==tofind)
	        {
	    	    cout<<"You got it, Congrats!!"<<endl;
	    	    break;
    	    }
	
	        else if(guess>tofind)
	        {
		        cout<<"Too high go a bit lower!!"<<endl;
		        tries--;
    	    }
	
       	    else
    	    {
	    	    cout<<"Too low go a bit higher!! "<<endl;
	    	    tries --;
	        }
	    }
	    if(tries==0)
	    {
		    cout<<"Game over!!!"<<endl;
	    }
	    cout<<"Select the game difficulty to start:"<<endl;
	    cout<<"1.Easy \t2.Meduim \t3.Difficult"<<endl;
	
	    cin>>option;
	}
	
	
	system("PAUSE");

}
