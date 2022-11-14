using System;

namespace jeannot
{
	class Program
	{
		static void Main()
		{
			int number;
			int counter;
			string input;
			
			do
			{
				Console.WriteLine("Enter a number and i will tell you whether it is a prime number or not");
			    input = Console.ReadLine();
			    number = Int32.Parse(input);
			
			    counter = 0;
			
			    for(int i=1; i<=number; i++)
			    {
				    if(number%i==0)
				 	counter++;
			    }
			
			    if (counter==2)
				    Console.WriteLine("This number is a Prime number");
			    else
				    Console.WriteLine("This number is not a Prime number");
			
			    Console.ReadLine();
			}while(number!=0);
			
			Console.ReadLine();
		}
	}
}