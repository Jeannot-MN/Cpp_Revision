#include<iostream>
#include<string.h>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node(int a)
		{
			data = a;
		}
};

int main()
{
	Node head(2);
	Node B(0);
	Node C(7);
	Node D(19);
	
	head.next=&B;
	B.next=&C;
	C.next=&D;
	
	int count=1;
	Node *following = &head;
	while(following->next!=NULL)
	{
		count++;
		following = following->next;
	}
	cout<<"We have found "<<count<<" Nodes in the list"<<endl;
	system("pause");
	return 0;
}
