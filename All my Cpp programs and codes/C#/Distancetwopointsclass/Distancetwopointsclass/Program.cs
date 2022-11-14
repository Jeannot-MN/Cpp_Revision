
using System;

namespace Distancetwopointsclass
{
	class point
	{
		public short x;
		public short y;
	}
	class Program
	{
		public static void Main(string[] args)
		{
			point point1 = new point();
			point point2 = new point();
			string input;
			double distance;
			
			Console.WriteLine("Enter the x of your point 1");
			input = Console.ReadLine();
			point1.x= Int16.Parse(input);
			
			Console.WriteLine("Enter the y of your point 1");
			input = Console.ReadLine();
			point1.y= Int16.Parse(input);
			
			Console.WriteLine("Enter the x of your point 2");
			input = Console.ReadLine();
			point2.x= Int16.Parse(input);
			
			Console.WriteLine("Enter the y of your point 2");
			input = Console.ReadLine();
			point2.y= Int16.Parse(input);
			
			distance = Math.Sqrt(Math.Pow((point1.x - point2.x),2) + Math.Pow((point1.y - point2.y),2));
			
			Console.WriteLine("The distance between point ({0},{1}) and point ({2},{3}) is {4}"
			                  ,point1.x,point1.y,point2.x,point2.y,distance);
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}