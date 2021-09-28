using System;
namespace lab1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введіть коефіцієнт a1: ");
            double a1 = Convert.ToDouble(Console.ReadLine());
            
            Console.Write("Введіть коефіцієнт b1: ");
            double b1 = Convert.ToDouble(Console.ReadLine());
            
            Console.Write("Введіть праву частину c1: ");
            double c1 = Convert.ToDouble(Console.ReadLine());
            
            Console.Write("Введіть коефіцієнт a2: ");
            double a2 = Convert.ToDouble(Console.ReadLine());
            
            Console.Write("Введіть коефіцієнт b2: ");
            double b2 = Convert.ToDouble(Console.ReadLine());
            
            Console.Write("Введіть праву частину c2: ");
            double c2 = Convert.ToDouble(Console.ReadLine());
            
            double determ = a1 * b2 - a2 * b1;
            double determ1 = c1 * b2 - b1 * c2;
            double determ2 = a1 * c2 - a2 * c1;
            
            double x = determ1 / determ;
            double y = determ2 / determ;
            Console.Write($"Відповідь: x={x}, y={y}");
        }
    }
}
