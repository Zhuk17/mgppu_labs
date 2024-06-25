using System;
using System.Collections.Generic;

namespace Lab1_Obj_Model;

public class GelPen : CommonView, InterLineColor
{
    public string LineColor { get; set; } 
    public decimal GelMass { get; set; } 

    public GelPen(decimal price, string producer, string lineColor, decimal gelMass) : base(price, producer)
    {
        LineColor = lineColor;
        GelMass = gelMass;
    }
}