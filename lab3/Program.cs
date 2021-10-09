using System;

namespace lab3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("enter the value of a: ");
            int a = Convert.ToInt32(Console.ReadLine());

            double eps = Math.Pow(10, -4);
            double prevY;
            double lastY = 1;

            if (a < 0)
            {
                Console.WriteLine("Negative numbers are not suitable for this calculation.");
            }
            else
            {
                do
                {
                    prevY = lastY;
                    lastY = (prevY + (a / prevY)) / 2;
                                 }
                while (Math.Abs(lastY - prevY) > eps);

                Console.WriteLine(lastY);
            }
        }
    }
}
