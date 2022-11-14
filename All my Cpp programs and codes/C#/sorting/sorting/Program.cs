
using System;

namespace sorting
{
	class Program
	{
		public static void Main(string[] args)
		{
			string input;
			int items=10;
			int [] tableau = new int[items];
			
			for(int i=0; i<=9; i++)
			{
				input=Console.ReadLine();
				tableau[i]=Int32.Parse(input);
			}
			
			for(int l=0; l<=9; l++)
			{
				for(int r=l+1; r<=9; r++)
				{
					if(tableau[r]<tableau[l])
					{
						int temp = tableau[l];
						tableau[l]= tableau[r];
						tableau[r]= temp;
					}
				}
			}
			Console.WriteLine("\n");
			for (int i=0; i<=9; i++)
			{
				
				Console.WriteLine(tableau[i]);
			}
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}