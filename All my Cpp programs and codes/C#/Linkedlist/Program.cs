
using System;

namespace Linkedlist
{
	class Node
	{
		public int data;
		public Node next;
		public Node(int a)
		{
			data=a;
		}
		
	}
	
	class Program
	{
		static void count(Node i)
	    {
			int count=1;
			Node c = i;
			
			while(c.next!=null)
			{
				count++;
				c=c.next;
			}
			
			Console.WriteLine("We have found {0} nodes in the list",count);
			
		
	    }
		public static void Main(string[] args)
		{
			
			Node head = new Node(2);
	        Node B = new Node(0);
	        Node C = new Node(7);
	        Node D = new Node(19);
	
	        head.next=B;
	        B.next=C;
	        C.next=D;
	        
	        count(head);
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}