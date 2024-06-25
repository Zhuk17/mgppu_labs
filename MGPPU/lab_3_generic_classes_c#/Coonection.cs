namespace lab_3_generic_classes;

public class Connection<B, N>
    where B : Bolt
    where N : Nut
{
    public B Bolt { get; private set; } // Свойство - "Болт"
    public N Nut { get; private set; } // Свойство - "Гайка"

    public Connection(B bolt, N nut)
    {
        if (bolt == null)
        {
            throw new ArgumentNullException(nameof(bolt), "Болт не может быть null.");
        }
        
        if (nut == null)
        {
            throw new ArgumentNullException(nameof(nut), "Гайка не может быть null.");
        }
        
        Bolt = bolt;
        Nut = nut;
    }

    // Метод - выводит в консоль строку "Болт <№ болта> вкручен в гайку <№ гайки>"
    public void Tighten()
    {
        Console.WriteLine($"Болт {Bolt.Number} вкручен в гайку {Nut.Number}");
    }
}
