
using System;

namespace OOP_functions
{
	class Program
	{
		static int multiplication(int a, int b)
		{
			return a*b;
		}
		public static void Main(string[] args)
		{
			int nb1;
			int nb2;
			string input;
			
			Console.Write("Enter the first number: ");
			input = Console.ReadLine();
			nb1 = Int32.Parse(input);
			
			Console.Write("Enter the second number: ");
			input = Console.ReadLine();
			nb2 = Int32.Parse(input);
			
			Console.WriteLine("The product is {0}",multiplication(nb1, nb2));
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}