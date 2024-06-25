using System;
using System.Collections.Generic;

namespace Lab1_Obj_Model;

public class Marker : CommonView, InterLineColor
{
    public string LineColor { get; set; } 
    public decimal LineWidth { get; set; } 

    public Marker(decimal price, string producer, string lineColor, decimal lineWidth) : base(price, producer)
    {
        LineColor = lineColor;
        LineWidth = lineWidth;
    }
}
