/*
 * Created by SharpDevelop.
 * User: Jeannot MN
 * Date: 2018/04/07
 * Time: 01:38 PM
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
 using System;

namespace starTraingle
{
	class Program
	{
		static void Main()
		{
			short sbase;
			string input;
			
			Console.WriteLine("Enter the base of the triangle");
			input = Console.ReadLine();
			sbase = Int16.Parse(input);
			
			for(int i=1; i<=sbase; i++)
			{
				for(int j=1; j<=i; j++)
				{
					Console.Write("*");
				}
				Console.WriteLine(" ");
			}
			
			Console.ReadLine();
		}
	}
}