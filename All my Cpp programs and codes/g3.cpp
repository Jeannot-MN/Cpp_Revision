#include<iostream>
using namespace std;

int main()
{
	const int ALIEN_POINTS=150;
	int alienskilled=10;
	int score=alienskilled*ALIEN_POINTS;
	cout<<"Score: "<<score<<endl;
	
	enum difficulty{NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty=EASY;
	
	enum ship{FIGHTER=25, BOMBER, CRUISER=50, DESTROYER=100};
	ship myShip= BOMBER;
	cout<<"To upgrade my ship to a Cruiser will cost "
	    <<(CRUISER-myShip)<<" Resource Points.";
	system("pause");
	return 0;
}
