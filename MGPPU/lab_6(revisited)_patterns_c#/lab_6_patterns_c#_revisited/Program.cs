using System;

namespace laba6
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] resistances = { 10, 20, 30 }; 

            ResistanceCalculationContext context = new ResistanceCalculationContext(new SeriesConnectionStrategy());
            Console.WriteLine($"Общее сопротивление для последовательного соединения {context.CalculateTotalResistance(resistances)} Омм");

            
            context.SetStrategy(new ParallelConnectionStrategy()); ///меняем стратегию
            Console.WriteLine($"TОбщее сопротивление для параллельного соединения: {context.CalculateTotalResistance(resistances)} Омм");
        }
    }
}