#include<iostream>
#include<string>

using namespace std;

class Team
{
	string name;
	int points;
	int stats[4];
	
	public:
	Team(){
		name = "Team";
		points =0;
		for (int i=0; i<4; i++)
		    stats[i]=0;
	}
	
	void setTeam(string n, int g_p, int g_w, int g_d, int g_l){
		if(n.length()!=0 && g_p >=0 && g_w>=0 && g_d>=0 && g_l>=0  )
	    {
	    	name = n;
	    	stats[0]=g_p;
	    	stats[1]=g_w;
	    	stats[2]=g_d;
	    	stats[3]=g_l;
		}
		else
		   cout << "Could not set values"<<endl;
	}
	
	void storePoints(int p){
	    points = p;
	}
	
	string getName(){
		return name;
	}
	
	int getPoints(){
		return points;
	}
	
	int getStats(int index){
		return stats[index];
	}
	
		
};
