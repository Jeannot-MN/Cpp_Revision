#include<iostream>
#include<string>
#include"league.cpp"

using namespace std;

int main()
{
	League league;
	league.setLeague();
	league.calcPoints();
	league.displayLeague();
	
	system("pause");
	return 0;
}
