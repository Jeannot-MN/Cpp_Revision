
using System;

namespace callfunctions
{
	class Program
	{
		static int squarev(int a)
		{
			a = a*a;
			return a;
		}
		
		static int squarer(ref int a)
		{
			a = a*a;
			return a;
		}
		public static void Main(string[] args)
		{
			int number;
			string input;
			
			Console.Write("Enter a number: ");
			input = Console.ReadLine();
			number = Int32.Parse(input);
			
			Console.WriteLine("Call by value\n");
			squarev(number);
			Console.WriteLine("The square is {0}\n",number);
			
            Console.WriteLine("Call by reference\n");
			squarer(ref number);
			Console.WriteLine("The square is {0}\n",number);			
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}