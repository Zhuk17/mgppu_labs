using System;

namespace laba6
{
    public interface IResistanceCalculationStrategy
    {
        double CalculateTotalResistance(double[] resistances);
    }
}