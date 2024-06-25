namespace lab_2_class_description.fin_proj;
public class Battery
{
    public enum BatteryType { AA, AAA }
    public BatteryType Type { get; set; }
    public double Capacity { get; set; }
    public string Brand { get; set; }
    public decimal Cost { get; set; }

    public Battery(BatteryType type, double capacity, string brand, decimal cost)
    {
        Type = type;
        Capacity = capacity;
        Brand = brand;
        Cost = cost;
    }
}