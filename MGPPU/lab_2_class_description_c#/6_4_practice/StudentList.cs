using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class StudentList : List <Student>
    {

        public Dictionary<int, int> GetYears2Count() =>
          this.GroupBy(x => x.Year).ToDictionary(x => x.Key, y => y.Count());
          
        public Dictionary<int,int> GetYearsCount()
        {
          var result = new Dictionary<int,int>();

          this.GroupBy(X=>X.Year)

          
          /*foreach (var student in this)
          {
             if (result.ContainsKey(student.Year))
               result[student.Year]++;
            else
               result.Add(student.Year, 1);
          }
          */

          for (var i = 0; i<this.Count;i++)
          {
            if (result.ContainsKey(this[i].Year))
               result[this[i].Year]++;
            else
                result.Add(this[i].Year,1);
          }  

          return result;
        }
    }
}