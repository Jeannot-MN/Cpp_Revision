/*
 * Created by SharpDevelop.
 * User: Jeannot MN
 * Date: 2018/04/07
 * Time: 11:31 AM
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */

using System;

namespace hello
{
	class Program
	{
		static void Main()
		{
			int number1, number2, sum;
			string input;
			
			Console.WriteLine("Enter the first number");
			input = Console.ReadLine();
			number1 = Int32.Parse(input);
			
			Console.WriteLine("Enter the second number");
			input = Console.ReadLine();
			number2 = Int32.Parse(input);
			
			sum = number1 + number2 ;
			
			Console.WriteLine(number1 + " + " + number2 + " = " + sum);
			Console.ReadLine();
		}
	}
}



