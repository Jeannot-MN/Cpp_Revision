/*
 * Created by SharpDevelop.
 * User: Jeannot MN
 * Date: 2018/04/07
 * Time: 08:12 PM
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;

namespace example
{
	class Program
	{
		
	 int add(int a, int b)
		{
			return a+b;
		}
		static int Main()
		{
			int number1; 
			int number2;
			string input;
			
			Console.WriteLine("Enter a number");
			input = Console.ReadLine();
			number1 = Int32.Parse(input);
			
			Console.WriteLine("Enter a number");
			input = Console.ReadLine();
			number2 = Int32.Parse(input);
			
			Console.WriteLine("Their sum is " + add(number1,number2));
			
			Console.WriteLine("Press any key to close");
			Console.ReadLine();
			return 0;
		}
	}
}