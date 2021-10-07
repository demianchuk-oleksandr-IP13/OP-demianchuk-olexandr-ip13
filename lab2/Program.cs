using System;

namespace lab2
{
    class Program
    {
        static void Main(string[] args)
        {
            /* 11. Задані дійсні числа х, у. Визначити, чи належить точка 
             з координатими х, у заштрихованій частині площини: */

            Console.Write("enter the value of x:");
            double x = Convert.ToDouble(Console.ReadLine());

            Console.Write("enter the value of y:");
            double y = Convert.ToDouble(Console.ReadLine());

            if (y > x / 2 && y <= Math.Sqrt(x * 4 - Math.Pow(x, 2)))
                {
                Console.Write("The point belongs to the area");
                }
            else
                {
                Console.Write("The point does NOT belong to the area");
                }
        }
    }
}
