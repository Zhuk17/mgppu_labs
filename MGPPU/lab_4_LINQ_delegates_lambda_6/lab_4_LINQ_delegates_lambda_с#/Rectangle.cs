using System;

public class Rectangle
{
    public double A { get; private set; }
    public double B { get; private set; }

    public Rectangle(double a, double b)
    {
        if (a <= 0 || b <= 0)
            throw new ArgumentException("Длина стороны прямоугольника должна быть положительным значением.");

        A = a;
        B = b;
    }

    public double CalculateArea()
    {
        return A * B;
    }
}
