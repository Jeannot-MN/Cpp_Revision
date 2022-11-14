#include<stdio.h>
#include<string.h>
using namespace std;

struct Node
{
	int data;
	char name[10];
};

int main()
{
	Node N1;
	
	N1.data = 2;	
	printf("%d is the occupying data", N1.data);
	return 0;
}
