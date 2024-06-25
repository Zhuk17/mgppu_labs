namespace lab_2_class_description.fin_proj;

public class Accumulator
{
    public enum AccumulatorType { AA, AAA }
    public AccumulatorType Type { get; set; }
    public double Capacity { get; set; }
    public double ChargeTime { get; set; }
    public decimal Cost { get; set; }

    public Accumulator(AccumulatorType type, double capacity, double chargeTime, decimal cost)
    {
        Type = type;
        Capacity = capacity;
        ChargeTime = chargeTime;
        Cost = cost;
    }
}