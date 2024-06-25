using System;

namespace laba6
{
    public class SeriesConnectionStrategy : IResistanceCalculationStrategy
    {
        public double CalculateTotalResistance(double[] resistances)
        {
            double totalResistance = 0;
            foreach (double resistance in resistances)
            {
                totalResistance += resistance;
            }
            return totalResistance;
        }
    }
}