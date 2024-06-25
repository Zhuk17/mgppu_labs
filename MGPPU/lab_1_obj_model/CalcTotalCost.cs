using System;
using System.Collections.Generic;

namespace Lab1_Obj_Model;

public decimal CalculateTotalCost()
    {
        return stationeries.Sum(CommonView => CommonView.Price);
    }
