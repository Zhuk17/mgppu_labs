using System;

public class Triangle
{
    public double A { get; private set; }
    public double B { get; private set; }
    public double C { get; private set; }

    public Triangle(double a, double b, double c)
    {
        if (a <= 0 || b <= 0 || c <= 0)
            throw new ArgumentException("Длина стороны прямоугольника должна быть положительным значением.");
            
        if (a + b <= c || a + c <= b || b + c <= a)
            throw new ArgumentException("Сумма длин любых двух сторон должна быть больше длины третьей стороны.");

        A = a;
        B = b;
        C = c;
    }

    public double CalculateArea()
    {
        double p = (A + B + C) / 2; 
        return Math.Sqrt(p * (p - A) * (p - B) * (p - C)); // формула Герона
    }
}
