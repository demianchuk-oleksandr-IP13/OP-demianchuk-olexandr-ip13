using System;
namespace lab1
{
    class Program
    {
        static void Main(string[] args)
        {
            double a1, b1, c1, a2, b2, c2, determ, determ1, determ2, x, y;
            Console.Write("Введіть коефіцієнт a1: ");
            a1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введіть коефіцієнт b1: ");
            b1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введіть праву частину c1: ");
            c1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введіть коефіцієнт a2: ");
            a2 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введіть коефіцієнт b2: ");
            b2 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введіть праву частину c2: ");
            c2 = Convert.ToDouble(Console.ReadLine());
            determ = a1 * b2 - a2 * b1;
            determ1 = c1 * b2 - b1 * c2;
            determ2 = a1 * c2 - a2 * c1;
            x = determ1 / determ;
            y = determ2 / determ;
            Console.Write($"Відповідь: x={x}, y={y}");
        }
    }
}
