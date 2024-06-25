using System;
using System.Collections.Generic;

namespace Lab1_Obj_Model;

public class Accounting
{
    private List<CommonView> stationeries = new List<CommonView>(); 

  
    public void AddCommonView(CommonView CommonView)
    {
        stationeries.Add(CommonView);
    }
}