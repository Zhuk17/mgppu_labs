namespace lab_2_class_description.fin_proj;

public static void Main(string[] args)
{
    var batteries = new PowerItemList<Battery>
    {
        new Battery(Battery.BatteryType.AA, 2000, "Brand1", 800),
        new Battery(Battery.BatteryType.AAA, 1200, "Brand2", 500),
        new Battery(Battery.BatteryType.AA, 1500, "Brand3", 600),
        new Battery(Battery.BatteryType.AAA, 2100, "Brand4", 900),
        new Battery(Battery.BatteryType.AA, 900, "Brand5", 300),
        new Battery(Battery.BatteryType.AAA, 3000, "Brand6", 1500),

    };

    batteries.CalculateDischargeTime(100);
}