
using System;

namespace return_manyvar
{
	class Program
	{
		static void operations(int a, int b, out int sum, out int sub, out int mult)
		{
			sum = a+b;
			sub = a-b;
			mult = a*b;
		}
		public static void Main(string[] args)
		{
			int nb1;
			int nb2;
			int sum_n;
			int sub_n;
			int prod;
			string input;
			
			Console.Write("Enter the first number: ");
			input= Console.ReadLine();
			nb1 = Int32.Parse(input);
			
			Console.Write("Enter the second number: ");
			input= Console.ReadLine();
			nb2 = Int32.Parse(input);
			
			operations(nb1, nb2,out sum_n, out sub_n, out prod);
			
			Console.WriteLine("The sum is {0}", sum_n);
			Console.WriteLine("The dif is {0}", sub_n);
			Console.WriteLine("The product is {0}",prod);
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}