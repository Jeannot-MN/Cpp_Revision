
using System;

namespace random
{
	class Program
	{
		public static void Main(string[] args)
		{
			Random rnd= new Random();
			int x;
			int i =1;
			while(i<=10)
			{
				x= (int) rnd.Next(1,11);
				Console.WriteLine(x);
				i++;
			}
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}