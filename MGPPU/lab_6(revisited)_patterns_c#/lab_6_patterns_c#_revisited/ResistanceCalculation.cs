using System;
namespace laba6
{
    public class ResistanceCalculationContext
    {
        private IResistanceCalculationStrategy _strategy;

        public ResistanceCalculationContext(IResistanceCalculationStrategy strategy)
        {
            _strategy = strategy;
        }

        public double CalculateTotalResistance(double[] resistances)
        {
            return _strategy.CalculateTotalResistance(resistances);
        }
        
        public void SetStrategy(IResistanceCalculationStrategy strategy)
        {
            _strategy = strategy;
        }
    }
}