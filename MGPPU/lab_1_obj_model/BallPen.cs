using System;
using System.Collections.Generic;

namespace Lab1_Obj_Model;

public class BallPen : CommonView, InterLineColor
{
    public string LineColor { get; set; } // Цвет линии, которую оставляет ручка
    public bool ReplaceableRods { get; set; } // Возможность замены стержня

    public BallPen(decimal price, string producer, string lineColor, bool replaceableRods) : base(price, producer)
    {
        LineColor = lineColor;
        ReplaceableRods = replaceableRods;
    }
}