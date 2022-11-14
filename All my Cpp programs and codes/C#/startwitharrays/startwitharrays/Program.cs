
using System;

namespace startwitharrays
{
	class Program
	{
		static void Main(string[] args)
		{
			int iteminarray=10;
			int [] tables = new int[iteminarray]  ;
			
			for(int i= 0; i<=9; i++)
			{
				tables[i]=i*i;
				Console.WriteLine(tables[i]);
			}
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}