namespace lab_2_class_description.fin_proj;

public class PowerItemList<T> : List<T> where T : class
{
    public PowerItemList(IEnumerable<T> items) : base(items)
    {
    }

    public void CalculateDischargeTime(double powerConsumption)
    {
        foreach (dynamic item in this)
        {
            double time = item.Capacity / powerConsumption;
            Console.WriteLine($"Время разрядки для {item.Brand}: {time} часов");
        }
    }
}
