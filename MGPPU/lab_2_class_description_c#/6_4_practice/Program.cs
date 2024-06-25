namespace ConsoleApp1;

Console.WriteLine("Hello, World!");

var students = new StudentList()
{
    new Student(){Name="test1", Year=1},
    new Student(){Name="test2", Year=2},
    new Student(){Name="test3", Year=3},
    new Student(){Name="test4", Year=4},
    new Student(){Name="test5", Year=5}
};

var years = students.GetYearsCount();
foreach (var year in years)
{
    Console.WriteLine($"{year.Key} курс - {year.Value} студентов")
}
    