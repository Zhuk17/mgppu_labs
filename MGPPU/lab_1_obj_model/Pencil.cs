using System;
using System.Collections.Generic;

namespace Lab1_Obj_Model;

public class Pencil : CommonView, InterLineColor
{
    public string LineColor { get; set; } 
    public string Hardness { get; set; } 
    public decimal PencilLength { get; set; }

    public Pencil(decimal price, string producer, string lineColor, string hardness, decimal pencilLength) : base(price, producer)
    {
        LineColor = lineColor;
        Hardness = hardness;
        PencilLength = pencilLength;
    }
}