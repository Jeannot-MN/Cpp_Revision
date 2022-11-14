
using System;

namespace reviewonaray
{
	class Program
	{
		public static void Main(string[] args)
		{
			int [] myarray = new int[12];
			
			Random jmn = new Random();
			
			for (int i=-1; i++<11;myarray[i]=(int) jmn.Next(0,20));
			for (int i=-1; i++<11; Console.WriteLine(myarray[i]));
			Console.WriteLine("The size of the array is {0}", sizeof(int));
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}