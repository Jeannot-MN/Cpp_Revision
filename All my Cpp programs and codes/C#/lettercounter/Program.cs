
using System;

namespace lettercounter
{
	class Program
	{
		static void Main()
		{
			char c;
			int nvw=0;
			Console.WriteLine("Type several characters  on the keyboard! and press space if you done");
			string input = Console.ReadLine();
			int i=0;
			do
			{
				c=input[i];
				if(c=='a' || c=='e' || c=='i'|| c=='o'|| c=='u' || c=='y')
				{
					Console.Write(c);
					nvw++;
				}
				i++;
			}while(c!=' ');
			Console.WriteLine(" ");
			Console.WriteLine("We have encounter "+ nvw +" vowels");
			
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}