
using System;

namespace initialise_an_array
{
	class Program
	{
		public static void average(int [] a, int [] b, int [] c, double [] e)
       {
	      int sum = 0;
	      float av ;
       	  for (int i = 0; i < 5; i++)
	      {
		  sum = a[i] + b[i] + c[i];
		  av = sum / 3;
		  e[i] = av;
          }
      }

		public static void sort(int [] a, int [] b, int [] c, double [] e, string [] f)
      {
	      for (int l = 0; l < 5; l++)
	      {
		     for (int r = l + 1; r < 5; r++)
		     {
			    if (e[r] > e[l])
			    {
				int temp1 = a[l];
				a[l] = a[r];
				a[r] = temp1;

				int temp2 = b[l];
				b[l] = b[r];
				b[r] = temp2;

				int temp3 = c[l];
				c[l] = c[r];
				c[r] = temp3;

				double temp = e[l];
				e[l] = e[r];
				e[r] = temp;

				string temp4 = f[l];
				f[l] = f[r];
				f[r] = temp4;
			    }
		    }
	     }
      }
		public static void Main(string[] args)
		{
			string [] students= {"John", "Ken", "Billy", "Kelly", "Jin"};
			int [] ct1mark = { 100, 76, 43, 16, 80 };
			int [] ct2mark = { 70, 56, 73, 76, 60 };
			int [] ct3mark = { 67, 65, 63, 66, 83 };
			double [] averg= new double [5];
			
			
			average(ct1mark, ct2mark, ct3mark, averg);
			
			Console.WriteLine("\tName\tTest1\tTest2\tTest3\tAverage\n");
			
			for (int i = 0; i < 5; i++)
	       {
				Console.WriteLine("\t{0}\t{1}\t{2}\t{3}\t{4}\n\n",students[i],ct1mark[i],ct2mark[i],ct3mark[i],averg[i]);
	       }
			
			sort(ct1mark, ct2mark, ct3mark, averg, students);
			
			Console.WriteLine("After sorting\n");
			for (int i = 0; i < 5; i++)
	       {
				Console.WriteLine("\t{0}\t{1}\t{2}\t{3}\t{4}\n\n",students[i],ct1mark[i],ct2mark[i],ct3mark[i],averg[i]);
	       }
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}