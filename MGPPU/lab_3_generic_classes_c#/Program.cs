namespace lab_3_generic_classes;

class Program
{
    static void Main(string[] args)
    {
        // Создаем экземпляры болта и гайки
        Bolt bolt = new Bolt(1);
        Nut nut = new Nut(2 );
        
        // Создаем экземпляр соединения
        Connection<Bolt, Nut> connection = new Connection<Bolt, Nut>(bolt, nut);
        // Выполняем операцию закрутки болта в гайку
        connection.Tighten();
    }
}
