
using System;

namespace Introtoclass
{
	class cube
	{
		public int height;
		public int width;
		public int length;
		public int volume;
		public string input;
		
		public void getlength()
		{
			Console.WriteLine("Enter the length of the cube");
			input= Console.ReadLine();
			length= Int32.Parse(input);
		}
		
		public void getwidth()
		{
			Console.WriteLine("Enter the width of the cube");
			input= Console.ReadLine();
			width= Int32.Parse(input);
		}
		
		public void getheight()
		{
			Console.WriteLine("Enter the height of the cube");
			input= Console.ReadLine();
			height= Int32.Parse(input);
		}
		
		public void findvolume()
		{
			volume= height * length * width;
			Console.WriteLine("The volume of this cube is "+volume);
		}
	}
	
	class Program
	{
		static void Main()
		{
			cube c1= new cube();
			c1.getlength();
			c1.getheight();
			c1.getwidth();
			c1.findvolume();
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}