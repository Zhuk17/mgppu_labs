using System;
using System.Collections.Generic;

namespace Lab1_Obj_Model;

public class Notebook : CommonView
{
    public string Linovka { get; set; }
    public int NumberOfPages { get; set; }

    public Notebook(decimal price, string producer, string linovka, int numberOfPages) : base(price, producer)
    {
        Linovka = linovka;
        NumberOfPages = numberOfPages;
    }
}