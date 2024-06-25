using System;
using System.Collections.Generic;
using System.Linq;

public class Program
{
    public static void Main()
    {
        List<object> shapes = new List<object>
        {
            new Triangle(3, 4, 5),
            new Rectangle(5, 7),
            new Triangle(6, 8, 10),
            new Rectangle(9, 4),
            new Triangle(2, 3, 4)
        };

        var totalTriangleArea = shapes.OfType<Triangle>().Sum(t => t.CalculateArea());
        Console.WriteLine($"Суммарная площадь треугольников: {totalTriangleArea}");

        var totalRectangleArea = shapes.OfType<Rectangle>().Sum(r => r.CalculateArea());
        Console.WriteLine($"Суммарная площадь прямоугольников: {totalRectangleArea}");
    }
}
