using System;

namespace laba6
{
    public class ParallelConnectionStrategy : IResistanceCalculationStrategy
    {
        public double CalculateTotalResistance(double[] resistances)
        {
            double inverseTotalResistance = 0;
            foreach (double resistance in resistances)
            {
                inverseTotalResistance += 1/resistance;
            }
            return 1/inverseTotalResistance;
        }
    }
}