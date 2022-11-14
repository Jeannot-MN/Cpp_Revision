#include<iostream>
#include<string>
#include "team.cpp"
#include<fstream>
#include<sstream>

using namespace std;

class League
{
	Team teams[12];
	string category[4];
	
	public:
	League(){
	    category[0] = "PLAYED";
	    category[1] = "WINS";
	    category[2] = "DRAWS";
	    category[3] = "LOSES";
	    
	    for(int i=0; i<12; i++)
	    {
	    	teams[i].setTeam("team",0,0,0,0);
		}
	}
	
	void setLeague(){
		ifstream inFile;
		string file = "teamData.csv";
		
		inFile.open(file.c_str());
		if(inFile.fail()){
			cout <<"Could not open the file";
		}
		
		else{
			string name;
			string line;
			int stat[4];
			int comma_pos;
			
			for(int t=0; t<12; t++){
				getline(inFile, line);
				comma_pos = line.find(',');
				name = line.substr(0,comma_pos);
				line.erase(0,comma_pos+1);
				
				for (int i=0; i<4; i++){
					comma_pos = line.find(',');
					stringstream(line.substr(0,comma_pos)) >> stat[i];
				    line.erase(0,comma_pos+1);
			    }
			    
			    teams[t].setTeam(name,stat[0], stat[1], stat[2], stat[3]);
		    }
	    }
	    
	    inFile.close();
    }
    
    void calcPoints(){
        int points;
        for(int t=0; t<12; t++){
	        points = 3 * teams[t].getStats(1) + teams[t].getStats(2);
			teams[t].storePoints(points);   
	    } 
	}
	
	void displayLeague(){
		cout<<"Team\t";
		for(int i=0; i<4; i++)
		    cout<<category[i]<<"\t";
		cout<<"Points"<<endl;
		
		for(int t=0; t<12; t++){
			cout<<teams[t].getName()<<"\t"<<teams[t].getStats(0)<<"\t"<<teams[t].getStats(1)<<"\t"<<teams[t].getStats(2)<<"\t"<<teams[t].getStats(3)<<"\t"<<teams[t].getPoints()<<endl;
		}
	}
};
