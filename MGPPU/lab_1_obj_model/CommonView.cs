using System;
using System.Collections.Generic;

namespace Lab1_Obj_Model;

public abstract class CommonView
{
    public decimal Price { get; set; }
    public string Producer { get; set; }

    protected CommonView(decimal price, string producer)
    {
        Price = price;
        Producer = producer;
    }
}
